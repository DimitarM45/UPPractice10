#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;
constexpr unsigned short MAX_CONCAT_STR_LENGTH = 200;

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

	char concatStr[MAX_CONCAT_STR_LENGTH];
	
	unsigned short concatStrLength = firstStrLength + secondStrLength;

	for (int i = 0; firstStr[i] != '\0'; i++)
	{
		concatStr[i] = firstStr[i];
	}

	for (int i = secondStrLength, j = 0; secondStr[j] != '\0'; i++, j++)
	{
		concatStr[i] = secondStr[j];
	}

	concatStr[concatStrLength] = '\0';

	std::cout << concatStr;
}