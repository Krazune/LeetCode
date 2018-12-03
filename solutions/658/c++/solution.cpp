// 658. Find K Closest Elements
#include <vector>
#include <cstdlib>

using namespace std;

class Solution
{
	public:
	vector<int> findClosestElements(vector<int>& arr, int k, int x)
	{
		int closestIndex = -1;
		int left = 0;
		int right = arr.size() - 1;

		while (left + 1 < right)
		{
			int mid = left + (right - left) / 2;
			int midValue = arr[mid];

			if (midValue == x)
			{
				closestIndex = mid;
				break;
			}
			else if (midValue < x)
			{
				left = mid;
			}
			else
			{
				right = mid;
			}
		}

		if (closestIndex == -1)
		{
			if (abs(arr[left] - x) < (abs(arr[right] - x)))
			{
				closestIndex = left;
			}
			else
			{
				closestIndex = right;
			}
		}

		left = closestIndex;
		right = closestIndex + 1;

		for (int kCounter = 0; kCounter < k; kCounter++)
		{
			if (right >= arr.size() || left >= 0 && abs(arr[left] - x) <= abs(arr[right] - x))
			{
				left--;
			}
			else
			{
				right++;
			}
		}

		left++;

		return vector<int>(&arr[left], &arr[left + k]);
	}
};