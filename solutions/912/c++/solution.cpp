// 912. Sort an Array
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	vector<int> mergeSort(vector<int>& values, int beginA, int endA, int beginB, int endB)
	{
		vector<int> sorted(endB - beginA + 1, 0);
		int indexA = beginA;
		int indexB = beginB;

		for (int sortedIndex = 0; sortedIndex < sorted.size(); ++sortedIndex)
		{
			if (indexB <= endB && (indexA > endA || values[indexA] > values[indexB]))
			{
				sorted[sortedIndex] = values[indexB];
				++indexB;
			}
			else
			{
				sorted[sortedIndex] = values[indexA];
				++indexA;
			}
		}

		return sorted;
	}

	public:
	vector<int> sortArray(vector<int>& nums)
	{
		for (int subvectorSize = 1; subvectorSize < nums.size(); subvectorSize *= 2)
		{
			for (int subvectorIndex = 0; (subvectorIndex + 1) * subvectorSize < nums.size(); subvectorIndex += 2)
			{
				int beginA = subvectorIndex * subvectorSize;
				int endA = (subvectorIndex + 1) * subvectorSize - 1;
				int beginB = (subvectorIndex + 1) * subvectorSize;
				int endB = min((subvectorIndex + 2) * subvectorSize - 1, (int)nums.size() - 1);
				vector<int> sorted = mergeSort(nums, beginA, endA, beginB, endB);

				copy(sorted.begin(), sorted.end(), nums.begin() + beginA);
			}
		}

		return nums;
	}
};