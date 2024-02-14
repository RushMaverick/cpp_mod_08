#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span {
	private:
		unsigned int _max;
		std::vector<int> _vec;
	public:
		void shortestSpan();
		void longestSpan();
		void fillSpan();
		void addNumber(unsigned int num);
		unsigned int getSize();
		Span();
		Span(unsigned int num);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

	
};

#endif

/*
	To-do list:
		Make a method that adds all given numbers to the span.
		Finish the copy operator.
		Finish shortestSpan() and longestSpan().
*/