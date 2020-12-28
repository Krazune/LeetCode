// 1678. Goal Parser Interpretation
class Solution
{
	public String interpret(String command)
	{
		StringBuilder resultStringBuilder = new StringBuilder();

		for (int i = 0; i < command.length(); ++i)
		{
			char currentCharacter = command.charAt(i);

			if (currentCharacter == 'G')
			{
				resultStringBuilder.append('G');
			}
			else
			{
				char nextCharacter = command.charAt(i + 1);

				if (nextCharacter == ')')
				{
					++i;
					resultStringBuilder.append('o');
				}
				else
				{
					i += 3;
					resultStringBuilder.append("al");
				}
			}
		}

		return resultStringBuilder.toString();
	}
}