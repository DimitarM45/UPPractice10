#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;

int main()
{
	char str[MAX_STR_LENGTH];

	std::cin.getline(str, MAX_STR_LENGTH);

	unsigned short strLength = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		strLength++;
	}
	
	for (int i = 0; i < strLength / 2; i++)
	{
		char tempChar = str[i];
		str[i] = str[strLength - i - 1];
		str[strLength - i - 1] = tempChar;
	}

	std::cout << "Reversed string: " << str;
}