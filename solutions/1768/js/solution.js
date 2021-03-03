// 1768. Merge Strings Alternately
var mergeAlternately = function(word1, word2)
{
	let result = "";

	for (let i = 0;; ++i)
	{
		let isComplete = true;

		if (i < word1.length)
		{
			result += word1[i];

			isComplete = false;
		}

		if (i < word2.length)
		{
			result += word2[i];

			isComplete = false;
		}

		if (isComplete)
		{
			break;
		}
	}

	return result;
};