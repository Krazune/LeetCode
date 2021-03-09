// 1736. Latest Time by Replacing Hidden Digits
var maximumTime = function(time)
{
	let result = Array.from(time);

	if (result[0] == '?')
	{
		if (result[1] == '?')
		{
			result[0] = '2';
			result[1] = '3';
		}
		else if (result[1] == '0' || result[1] == '1' || result[1] == '2' || result[1] == '3')
		{
			result[0] = '2';
		}
		else
		{
			result[0] = '1';
		}
	}
	else if (result[0] == '0' || result[0] == '1')
	{
		if (result[1] == '?')
		{
			result[1] = '9';
		}
	}
	else
	{
		if (result[1] == '?')
		{
			result[1] = '3';
		}
	}

	if (result[3] == '?')
	{
		result[3] = '5';
	}

	if (result[4] == '?')
	{
		result[4] = '9';
	}

	return result.join("");
};