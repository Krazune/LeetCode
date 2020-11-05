// 1496. Path Crossing
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	bool isPathCrossing(string path)
	{
		unordered_map<int, unordered_set<int>> visited;
		int x = 0;
		int y = 0;

		visited[0] = unordered_set<int>();
		visited[0].insert(0);

		for (int i = 0; i < path.size(); ++i)
		{
			switch (path[i])
			{
				case 'N':
				++y;
				break;

				case 'S':
				--y;
				break;

				case 'E':
				++x;
				break;

				case 'W':
				--x;
				break;
			}

			if (visited.find(x) == visited.end())
			{
				visited[x] = unordered_set<int>();

				visited[x].insert(y);

				continue;
			}

			bool added = visited[x].insert(y).second;

			if (!added)
			{
				return true;
			}
		}

		return false;
	}
};