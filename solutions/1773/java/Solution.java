// 1773. Count Items Matching a Rule
import java.util.List;

class Solution
{
	public int countMatches(List<List<String>> items, String ruleKey, String ruleValue)
	{
		int ruleIndex = 0;

		if (ruleKey.equals("color"))
		{
			ruleIndex = 1;
		}
		else if (ruleKey.equals("name"))
		{
			ruleIndex = 2;
		}

		int matchCount = 0;

		for (int i = 0; i < items.size(); ++i)
		{
			if (items.get(i).get(ruleIndex).equals(ruleValue))
			{
				++matchCount;
			}
		}

		return matchCount;
	}
}