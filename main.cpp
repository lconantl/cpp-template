#include <iostream>
#include <todo-name.hpp>

int main()
{
	constexpr int result = todo_name::Add(2, 3);

	std::cout << "2 + 3 = " << result << '\n';

	if constexpr (result != 5)
	{
		std::cerr << "Add() failed\n";
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}