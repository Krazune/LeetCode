// 1154. Day of the Year
#include <string>

using namespace std;

class Solution
{
	bool isLeapYear(int year)
	{
		if (year % 400 == 0)
		{
			return true;
		}

		if (year % 100 == 0)
		{
			return false;
		}

		if (year % 4 == 0)
		{
			return true;
		}

		return false;
	}

	public:
	int dayOfYear(string date)
	{
		int year = stoi(date.substr(0, 4));
		int month = stoi(date.substr(5, 2));
		int day = stoi(date.substr(8, 2));

		if (month == 1)
		{
			return day;
		}

		if (month == 2)
		{
			return 31 + day;
		}

		const int totalPastDays[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

		return totalPastDays[month - 1] + day + (isLeapYear(year) ? 1 : 0);
	}
};