// 709. To Lower Case
char* toLowerCase(char* str)
{
	int lowerOffset = 'a' - 'A';

	for (int characterIndex = 0; str[characterIndex] != '\0'; characterIndex++)
	{
		char currentCharacter = str[characterIndex];

		if (currentCharacter >= 'A' && currentCharacter <= 'Z')
		{
			str[characterIndex] += lowerOffset;
		}
	}

	return str;
}