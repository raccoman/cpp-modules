#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	unsigned int		_size;
	std::vector<int>	_container;
public:
	Span(unsigned int size);
	~Span();
	void	addNumber(int number);
	int		longestSpan();
	int		shortestSpan();
};

#endif
