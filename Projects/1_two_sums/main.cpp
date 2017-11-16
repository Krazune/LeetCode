#include <cstdlib>
#include <vector>
#include <iostream>

class Solution
{
    public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target)
    {
        for(int firstIndex = 0; firstIndex <= numbers.size(); firstIndex++)
        {
            for(int secondIndex = 0; secondIndex <= numbers.size(); secondIndex++)
            {
                if(numbers[firstIndex] + numbers[secondIndex] == target && firstIndex != secondIndex)
                {
                    return { firstIndex, secondIndex };
                }
            }
        }
    }
};

int main()
{
    Solution solution;
    std::vector<int> numbers;
    std::vector<int> results;

    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(4);

    results = solution.twoSum(numbers, 6);

    std::cout << '[' << results[0] << ", " << results[1] << ']';

    return EXIT_SUCCESS;
}