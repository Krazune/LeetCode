// 1784. Check if Binary String Has at Most One Segment of Ones
var checkOnesSegment = function(s)
{
	let zeroFound = false;

	for (let i = 0; i < s.length; ++i)
	{
		if (s[i] == '0')
		{
			if (!zeroFound)
			{
				zeroFound = true;
			}

			continue;
		}

		if (zeroFound)
		{
			return false;
		}
	}

	return true;
};