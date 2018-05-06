// 811. Subdomain Visit Count
#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
	public:
	vector<string> subdomainVisits(vector<string>& cpdomains)
	{
		unordered_map<string, int> domainVisits;
		vector<string> visits;

		for (string cpdomain : cpdomains)
		{
			string number;
			string domain;
			int visitCount = 0;
			int visitStringIndex = 0;

			for (; cpdomain[visitStringIndex] != ' '; visitStringIndex++)
			{
				number += cpdomain[visitStringIndex];
			}

			visitCount = stoi(number);

			for (int domainStringIndex = cpdomain.size() - 1; domainStringIndex > visitStringIndex; domainStringIndex--)
			{
				if (cpdomain[domainStringIndex] == '.')
				{
					domainVisits[domain] += visitCount;
				}

				domain = cpdomain[domainStringIndex] + domain;
			}

			domainVisits[domain] += visitCount;
		}

		for (auto iterator = domainVisits.begin(); iterator != domainVisits.end(); iterator++)
		{
			visits.push_back(to_string(iterator->second) + ' ' + iterator->first);
		}

		return visits;
	}
};