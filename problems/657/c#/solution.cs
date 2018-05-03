// 657. Judge Route Circle
public class Solution
{
	public bool JudgeCircle(string moves)
	{
		int x = 0;
		int y = 0;

		foreach (char direction in moves)
		{
			switch (direction)
			{
				case 'U':
				y++;
				break;

				case 'L':
				x--;
				break;

				case 'D':
				y--;
				break;

				case 'R':
				x++;
				break;

				default:
				return false;
				break;
			}
		}

		return x == 0 && y == 0;
	}
}