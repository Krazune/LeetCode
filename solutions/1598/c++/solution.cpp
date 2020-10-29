// 1598. Crawler Log Folder
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
	int minOperations(vector<string>& logs)
	{
		int currentLevel = 0;

		for (int i = 0; i < logs.size(); ++i)
		{
			if (logs[i][0] == '.')
			{
				if (logs[i][1] != '.' || currentLevel == 0)
				{
					continue;
				}

				--currentLevel;

				continue;
			}

			++currentLevel;
		}

		return currentLevel;
	}
};