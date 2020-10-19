// 1282. Group the People Given the Group Size They Belong To
var groupThePeople = function(groupSizes)
{
	let groups = new Array();
	let temporaryGroupsMap = new Map();

	for (let person = 0; person < groupSizes.length; ++person)
	{
		let personGroupSize = groupSizes[person];

		if (personGroupSize == 1)
		{
			groups.push([person]);

			continue;
		}

		if (!temporaryGroupsMap.has(personGroupSize))
		{
			temporaryGroupsMap.set(personGroupSize, [person]);

			continue;
		}

		let temporaryGroup = temporaryGroupsMap.get(personGroupSize);

		temporaryGroup.push(person);

		if (temporaryGroup.length != personGroupSize)
		{
			continue;
		}

		groups.push(temporaryGroup);
		temporaryGroupsMap.delete(personGroupSize);
	}

	return groups;
};