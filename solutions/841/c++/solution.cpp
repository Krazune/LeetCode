// 841. Keys and Rooms
#include <vector>
#include <unordered_set>
#include <stack>

using namespace std;

class Solution
{
	public:
	bool canVisitAllRooms(vector<vector<int>>& rooms)
	{
		unordered_set<int> visited;
		stack<int> keys;

		keys.push(0);

		while (!keys.empty())
		{
			int room = keys.top();

			keys.pop();

			if (visited.find(room) != visited.end())
			{
				continue;
			}

			for (int key : rooms[room])
			{
				keys.push(key);
			}

			visited.insert(room);
		}

		return visited.size() == rooms.size();
	}
};