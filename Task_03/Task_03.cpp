#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;

int main()
{
	char str[MAX_STR_LENGTH];

	std::cin.getline(str, MAX_STR_LENGTH);

	char strCopy[MAX_STR_LENGTH];

	unsigned short strLength = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		strCopy[i] = str[i];
		strLength++;
	}

	strCopy[strLength] = '\0';

	std::cout << strCopy;
}