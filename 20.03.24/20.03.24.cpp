#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string letters[]{ "a","b","c","d","e","f","g","h" };

	std::cout << "  ";

	for (int i = 0; i < 8; i++)
	{
		std::cout << letters[i] << "   ";
	}

	std::cout << "\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "8 ";
		}
		std::cout << letters[i] << "8  ";
	}
	
	std::cout << "8\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "7 ";
		}
		std::cout << letters[i] << "7  ";
	}

	std::cout << "7\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "6 ";
		}
		std::cout << letters[i] << "6  ";
	}

	std::cout << "6\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "5 ";
		}
		std::cout << letters[i] << "5  ";
	}

	std::cout << "5\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "4 ";
		}
		std::cout << letters[i] << "4  ";
	}

	std::cout << "4\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "3 ";
		}
		std::cout << letters[i] << "3  ";
	}

	std::cout << "3\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "2 ";
		}
		std::cout << letters[i] << "2  ";
	}

	std::cout << "2\n";

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			std::cout << "1 ";
		}
		std::cout << letters[i] << "1  ";
	}

	std::cout << "1\n  ";

	for (int i = 0; i < 8; i++)
	{
		std::cout << letters[i] << "   ";
	}




	return 0;
}