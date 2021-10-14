#include <mutantstack.hpp>

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "============" << std::endl;

	try
	{
		Span mega = Span(10000);

		int random;
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			random = rand() % RAND_MAX + 1;
			mega.addNumber(random);
		}
		std::cout << mega.shortestSpan() << std::endl;
		std::cout << mega.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "============" << std::endl;

	try
	{
		Span hundred = Span(100);
		for (int i = 0; i < 100; i++)
			hundred.addNumber(i + 1);
		std::cout << hundred.shortestSpan() << std::endl;
		std::cout << hundred.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "============" << std::endl;

	try
	{
		Span Exception = Span(1);
		Exception.addNumber(4);
		std::cout << Exception.shortestSpan() << std::endl;
		std::cout << Exception.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}