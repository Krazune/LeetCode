// 349. Intersection of Two Arrays
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{
		unordered_set<int> numberElements(nums1.begin(), nums1.end());
		vector<int> result;

		for (int element : nums2)
		{
			if (numberElements.find(element) != numberElements.end())
			{
				result.push_back(element);
				numberElements.erase(element);
			}
		}

		return result;
	}
};