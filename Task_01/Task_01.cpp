#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;

int main()
{
	char str[MAX_STR_LENGTH];

	std::cin.getline(str, MAX_STR_LENGTH);

	unsigned short index = 0;

	while (str[index++] != '\0');

	std::cout << "The length of the string is: " << --index;
}