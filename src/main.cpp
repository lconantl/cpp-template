#include <cstdlib>
#include <exception>
#include <iostream>

int main()
{
	try
	{
		// TODO: Initialize and run the application
		std::cout << "Hello, World!\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}