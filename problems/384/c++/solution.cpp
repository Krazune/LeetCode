// 384. Shuffle an Array
#include <vector>
#include <cstdlib>

using namespace std;

class Solution
{
	vector<int> numbers;

	public:
	Solution(vector<int> nums)
	{
		numbers = nums;
	}

	vector<int> reset()
	{
		return numbers;
	}

	vector<int> shuffle()
	{
		vector<int> shuffled(numbers);
		int numberCount = shuffled.size();

		for (int index = 0; index < numberCount; index++)
		{
			int randomIndex = rand() % (numberCount - index) + index;

			swap(shuffled[index], shuffled[randomIndex]);
		}

		return shuffled;
	}
};