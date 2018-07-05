// 733. Flood Fill
#include <vector>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
	{
		int targetColor = image[sr][sc];

		if (targetColor == newColor)
		{
			return image;
		}

		queue<vector<int>> pixels;

		pixels.push(vector<int>({sr, sc}));

		while (!pixels.empty())
		{
			int currentRow = pixels.front()[0];
			int currentColumn = pixels.front()[1];

			pixels.pop();

			if (currentRow >= 0 && currentRow < image.size() && currentColumn >= 0 && currentColumn < image[0].size())
			{
				if (image[currentRow][currentColumn] == targetColor)
				{
					image[currentRow][currentColumn] = newColor;

					pixels.push(vector<int>({currentRow + 1, currentColumn}));
					pixels.push(vector<int>({currentRow, currentColumn + 1}));
					pixels.push(vector<int>({currentRow - 1, currentColumn}));
					pixels.push(vector<int>({currentRow, currentColumn - 1}));
				}
			}
		}

		return image;
	}
};