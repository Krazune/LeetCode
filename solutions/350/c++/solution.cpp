// 350. Intersection of Two Arrays II
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
	{
		unordered_map<int, int> nums1Frequency;

		for (int i = 0; i < nums1.size(); ++i)
		{
			++nums1Frequency[nums1[i]];
		}

		vector<int> result;

		for (int i = 0; i < nums2.size(); ++i)
		{
			if (nums1Frequency.find(nums2[i]) != nums1Frequency.end())
			{
				result.push_back(nums2[i]);

				if (nums1Frequency[nums2[i]] == 1)
				{
					nums1Frequency.erase(nums2[i]);

					continue;
				}

				--nums1Frequency[nums2[i]];
			}
		}

		return result;
	}
};