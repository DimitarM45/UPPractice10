#include <iostream>

constexpr unsigned short MAX_STR_LENGTH = 100;

int main()
{
	char str[MAX_STR_LENGTH];

	std::cin.getline(str, MAX_STR_LENGTH);

	unsigned short vowelCounter = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case 'u':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
				vowelCounter++;
				break;
		}
	}

	std::cout << "Number of vowels: " << vowelCounter;
}