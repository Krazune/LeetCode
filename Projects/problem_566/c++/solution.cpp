// 566. Reshape the Matrix
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
	{
		if (nums.size() * nums[0].size() != r * c) return nums;

		vector<vector<int>> m(r, vector<int>(c));
		int w = nums[0].size();

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				int l = i * c + j;

				m[i][j] = nums[l / w][l % w];
			}
		}

		return m;
	}
};