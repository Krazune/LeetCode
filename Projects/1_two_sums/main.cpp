#include <cstdlib>
#include <vector>
#include <iostream>
#include <exception>

class Solution
{
    public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
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

int main()
{
    Solution solution;
    std::vector<int> numbers;
    std::vector<int> results;

    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(4);

    try
    {
        results = solution.twoSum(numbers, 6);
        std::cout << '[' << results[0] << ", " << results[1] << ']' << std::endl;
    }
    catch (std::runtime_error exception)
    {
        std::cout << exception.what();
    }

    return EXIT_SUCCESS;
}