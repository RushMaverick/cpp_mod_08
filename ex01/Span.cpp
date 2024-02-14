#include "Span.hpp"

Span::Span() : _max(0){}

Span::Span(unsigned int num) : _max(num) {}

Span::~Span(){}

Span::Span(const Span &other) : _vec(other._vec), _max(other._max) {}

Span& Span::operator=(Span const &other)
{
	_vec = other._vec;
	_max = other._max;
	return *this;
}

unsigned int Span::getSize() {return _max;}

void Span::addNumber(unsigned int num){
	if (_vec.size() == getSize())
		throw std::invalid_argument("Container is full. No more numbers can be added.");
	_vec.push_back(num);
}

void Span::shortestSpan(){
	
}

void Span::longestSpan(){
	if (_vec.size() == 0 || _vec.size() == 1)
		throw std::invalid_argument("Container does not contain enough values to calculate span.");
	//min and max values that get updated in a loop 
}

void Span::fillSpan(){
	for (int i = 0; i < _max; ++i)
		_vec.push_back(rand() % 1000);
}
