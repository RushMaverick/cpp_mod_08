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

void Span::addNumber(int num){
	if (_vec.size() == getSize())
		throw std::invalid_argument("Container is full. No more numbers can be added.");
	_vec.push_back(num);
}

int Span::shortestSpan() const {
	if (_vec.size() == 0 || _vec.size() == 1)
		throw std::invalid_argument("Container does not contain enough values to calculate span.");
	std::vector<int>::const_iterator a, b;
	int temp = 0;
	int res = abs(*_vec.begin() - *(_vec.begin() + 1));
	for (a = _vec.begin(); a != _vec.end(); ++a){
		for (b = a + 1; b != _vec.end(); ++b){
			temp = abs(*a - *b);
			if (temp < res)
				res = temp;
		}
	}
	return res;
}

int Span::longestSpan() const {
	if (_vec.size() == 0 || _vec.size() == 1)
		throw std::invalid_argument("Container does not contain enough values to calculate span.");
	std::vector<int>::const_iterator i;
	int min_val = *_vec.begin();
	int max_val = *_vec.begin();
	for (i = _vec.begin(); i != _vec.end(); ++i){
		if (*i < min_val)
			min_val = *i;
		else if (*i > max_val)
			max_val = *i;
	}
	return max_val - min_val;
}

void Span::fillSpan(){
	for (int i = 0; i < _max; ++i)
		_vec.push_back(rand() % 1000);
}

std::ostream& operator<<(std::ostream& o, Span const & span)
{
	o << span.shortestSpan();
	o << span.longestSpan();
	return o;
}
