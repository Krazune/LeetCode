// 1732. Find the Highest Altitude
var largestAltitude = function(gain)
{
	let highest = 0;
	let currentAltitude = 0;

	for (let i = 0; i < gain.length; ++i)
	{
		currentAltitude += gain[i];

		if (currentAltitude > highest)
		{
			highest = currentAltitude;
		}
	}

	return highest;
};