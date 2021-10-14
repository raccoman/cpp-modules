#include <mutantstack.hpp>

Span::Span(unsigned int size) : _size(size) {
}

Span::~Span() {
}

void Span::addNumber(int number) {
	if (_container.size() >= _size)
		throw std::exception();
	_container.push_back(number);
}

int Span::longestSpan() {
	if (_container.size() < 2)
		throw std::exception();
	return *std::max_element(_container.begin(), _container.end()) - *std::min_element(_container.begin(), _container.end());
}

int Span::shortestSpan() {

	if (_container.size() < 2)
		throw std::exception();

	unsigned int shortest;
	std::sort(_container.begin(), _container.end());
	for (std::vector<int>::iterator i = _container.begin(); i != (_container.end() - 1); i++)
	{
		unsigned int span = *(i + 1) - *i;
		shortest = shortest > span ? span : shortest;
	}
	return shortest;
}