// 682. Baseball Game
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution
{
	public:
	int calPoints(vector<string>& ops)
	{
		stack<int> validPoints;
		int result = 0;

		for (string operation : ops)
		{
			switch (operation[0])
			{
				case '+':
				{
					int temporary1 = validPoints.top();

					validPoints.pop();
					
					int temporary2 = validPoints.top() + temporary1;
					
					result += temporary2;
					validPoints.push(temporary1);
					validPoints.push(temporary2);
				}
				break;

				case 'D':
				validPoints.push(validPoints.top() * 2);
				result += validPoints.top();
				break;

				case 'C':
				result -= validPoints.top();
				validPoints.pop();
				break;

				default:
				validPoints.push(stoi(operation));
				result += validPoints.top();
				break;
			}
		}

		return result;
	}
};