// 690. Employee Importance
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
	public:
	int getTotalImportance(unordered_map<int, Employee*>& e, int id)
	{
		int s = e[id]->importance;
		
		for (int i : e[id]->subordinates) s += getTotalImportance(e, i);
		
		return s;
	}
	
	int getImportance(vector<Employee*> employees, int id)
	{
		unordered_map<int, Employee*> e;
		
		for (Employee* employee : employees) e.insert({employee->id, employee});

		return getTotalImportance(e, id);
	}
};