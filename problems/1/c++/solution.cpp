// 1. Two Sum
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	vector<int> twoSum(const vector<int>& numbers, int target)
	{
		unordered_map<int, int> l;
		
		for (int i = 0; i < numbers.size(); i++)
		{
			auto f = l.find(target - numbers[i]);
			
			if (f != l.end() && f->second != i) return vector<int> {i, f->second};
			
			l.insert({numbers[i], i});
		}
	}
};
