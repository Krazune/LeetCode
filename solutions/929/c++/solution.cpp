// 929. Unique Email Addresses
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution
{
	public:
	int numUniqueEmails(vector<string>& emails)
	{
		set<string> uniqueEmails;

		for (string email : emails)
		{
			string currentEmail;
			int emailSize = email.size();
			int characterIndex = 0;
			bool ignore = false;

			for (; characterIndex < emailSize; ++characterIndex)
			{
				char currentCharacter = email[characterIndex];

				if (currentCharacter == '@')
				{
					break;
				}

				if (ignore)
				{
					continue;
				}

				if (currentCharacter == '+')
				{
					ignore = true;
				}
				else if (currentCharacter != '.')
				{
					currentEmail += currentCharacter;
				}
			}

			currentEmail += '@';

			for (; characterIndex < emailSize; ++characterIndex)
			{
				currentEmail += email[characterIndex];
			}

			uniqueEmails.insert(currentEmail);
		}

		return uniqueEmails.size();
	}
};