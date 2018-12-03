// 784. Letter Case Permutation
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<string> letterCasePermutation(string S)
	{
		queue<string> permutationQueue;
		int characterCount = S.size();

		permutationQueue.push(S);

		for (int characterIndex = 0; characterIndex < characterCount; characterIndex++)
		{
			if (isdigit(S[characterIndex]))
			{
				continue;
			}

			int permutationCount = permutationQueue.size();

			for (int permutationIndex = 0; permutationIndex < permutationCount; permutationIndex++)
			{
				string currentPermutation = permutationQueue.front();

				permutationQueue.pop();

				currentPermutation[characterIndex] = tolower(currentPermutation[characterIndex]);
				permutationQueue.push(currentPermutation);

				currentPermutation[characterIndex] = toupper(currentPermutation[characterIndex]);
				permutationQueue.push(currentPermutation);
			}
		}

		vector<string> permutations;
		int permutationCount = permutationQueue.size();

		for (int permutationIndex = 0; permutationIndex < permutationCount; permutationIndex++)
		{
			permutations.push_back(permutationQueue.front());

			permutationQueue.pop();
		}

		return permutations;
	}
};