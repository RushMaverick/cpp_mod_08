#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <cmath>

class Span {
	private:
		unsigned int _max;
		std::vector<int> _vec;
	public:
		int shortestSpan() const;
		int longestSpan() const;
		void fillSpan();
		void addNumber(int num);
		unsigned int getSize();
		Span();
		Span(unsigned int num);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
};

std::ostream& operator<<(std::ostream& o, Span const & span);

#endif
