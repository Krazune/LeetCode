// 1. Two Sum
#include <vector>
#include <stdexcept>

class Solution
{
    public:
    std::vector<int> twoSum(std::vector<int> const &numbers, int target)
    {
        for (int firstIndex = 0; firstIndex < numbers.size(); firstIndex++)
        {
            for (int secondIndex = 0; secondIndex < numbers.size(); secondIndex++)
            {
                if (numbers[firstIndex] + numbers[secondIndex] == target && firstIndex != secondIndex)
                {
                    return { firstIndex, secondIndex };
                }
            }
        }
        throw std::runtime_error("Sum not found.");
    }
};