// 832. Flipping an Image
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
	{
		vector<vector<int>> resultImage(A);
		int width = A[0].size();
		int halfWidth = width / 2;
		bool hasUnevenColumns = A[0].size() % 2 == 1;

		for (int rowIndex = 0; rowIndex < resultImage.size(); rowIndex++)
		{
			for (int low = 0, high = width - 1; low < halfWidth; low++, high--)
			{
				int temporary = resultImage[rowIndex][low];

				resultImage[rowIndex][low] = resultImage[rowIndex][high] ^ 1;
				resultImage[rowIndex][high] = temporary ^ 1;
			}

			if (hasUnevenColumns)
			{
				resultImage[rowIndex][halfWidth] ^= 1;
			}
		}

		return resultImage;
	}
};