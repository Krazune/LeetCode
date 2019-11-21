// 1108. Defanging an IP Address
#include <string.h>
#include <stdlib.h>

char* defangIPaddr(char* address)
{
	int addressLength = strlen(address);
	char* defangedAddress = malloc(sizeof(char) * (addressLength + 7));
	int defangedAddressIndex = 0;

	for (int addressIndex = 0; addressIndex < addressLength; ++addressIndex)
	{
		if (address[addressIndex] == '.')
		{
			defangedAddress[defangedAddressIndex] = '[';
			++defangedAddressIndex;
			defangedAddress[defangedAddressIndex] = address[addressIndex];
			++defangedAddressIndex;
			defangedAddress[defangedAddressIndex] = ']';
		}
		else
		{
			defangedAddress[defangedAddressIndex] = address[addressIndex];
		}

		++defangedAddressIndex;
	}

	defangedAddress[defangedAddressIndex] = '\0';

	return defangedAddress;
}