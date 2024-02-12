#include "Span.hpp"

Span::Span() : _max(0){}

Span::~Span(){}

Span::Span(const Span &other) : _max(other._max) {}

Span &Span::operator=(const Span &other){
	if (this != &other){
		this->_max = other._max;
	}
}