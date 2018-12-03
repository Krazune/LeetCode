// 933. Number of Recent Calls
#include <list>

using namespace std;

class RecentCounter
{
	list<int> pings;

	public:
	RecentCounter() { }

	int ping(int t)
	{
		pings.push_back(t);

		while (!pings.empty() && pings.front() < t - 3000)
		{
			pings.pop_front();
		}

		return pings.size();
	}
};