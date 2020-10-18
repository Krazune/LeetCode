// 1528. Shuffle String
var restoreString = function(s, indices)
{
	let characterArray = new Array(s.length);

	for (let i = 0; i < s.length; ++i)
	{
		characterArray[indices[i]] = s[i];
	}

	return characterArray.join("");
};