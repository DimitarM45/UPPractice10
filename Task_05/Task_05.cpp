#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;

unsigned short getStringLength(const char str[MAX_STR_LENGTH])
{
	int length = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

int main()
{
	char firstStr[MAX_STR_LENGTH];
	std::cin.getline(firstStr, MAX_STR_LENGTH);

	char secondStr[MAX_STR_LENGTH];
	std::cin.getline(secondStr, MAX_STR_LENGTH);

	unsigned short firstStrLength = getStringLength(firstStr);
	unsigned short secondStrLength = getStringLength(secondStr);

	unsigned short minLength = firstStrLength < secondStrLength ? firstStrLength : secondStrLength;

	unsigned short firstStringScore = 0;
	unsigned short secondStringScore = 0;

	for (int i = 0; i < minLength; i++)
	{
		if (firstStr[i] > secondStr[i])
		{
			firstStringScore++;
		}
		else if (secondStr[i] > firstStr[i])
		{
			secondStringScore++;
		}
	}

	std::cout << (firstStringScore > secondStringScore ? "The first string is greater." : "The second string is greater");
}