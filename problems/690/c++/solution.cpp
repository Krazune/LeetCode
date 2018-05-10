// 690. Employee Importance
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
	int getTotalImportance(unordered_map<int, Employee*>& employees, int id)
	{
		int importanceSum = employees[id]->importance;

		for (int subordinateImportance : employees[id]->subordinates)
		{
			importanceSum += getTotalImportance(employees, subordinateImportance);
		}

		return importanceSum;
	}

	public:
	int getImportance(vector<Employee*> employees, int id)
	{
		unordered_map<int, Employee*> employeeMap;

		for (Employee* employee : employees)
		{
			employeeMap.insert({employee->id, employee});
		}

		return getTotalImportance(employeeMap, id);
	}
};