// 1773. Count Items Matching a Rule
var countMatches = function(items, ruleKey, ruleValue)
{
	let ruleIndex = 0;

	if (ruleKey == "color")
	{
		ruleIndex = 1;
	}
	else if (ruleKey == "name")
	{
		ruleIndex = 2;
	}

	let matchCount = 0;

	for (let i = 0; i < items.length; ++i)
	{
		if (items[i][ruleIndex] == ruleValue)
		{
			++matchCount;
		}
	}

	return matchCount;
};