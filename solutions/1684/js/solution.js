// 1684. Count the Number of Consistent Strings
var countConsistentStrings = function(allowed, words)
{
	let allowedSet = new Set();

	for (let i = 0; i < allowed.length; ++i)
	{
		allowedSet.add(allowed[i]);
	}

	let allowedCount = words.length;

	for (let i = 0; i < words.length; ++i)
	{
		for (let j = 0; j < words[i].length; ++j)
		{
			if (!allowedSet.has(words[i][j]))
			{
				--allowedCount;

				break;
			}
		}
	}

	return allowedCount;
};