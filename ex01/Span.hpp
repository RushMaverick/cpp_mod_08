#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <span>
#include <exception>

class Span {
	public:
		void shortestSpan();
		void longestSpan();
		void addNumber(int num);
		Span();
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
	private:
		int _max;
};

#endif

/*
	To-do list:
		Make a method that adds all given numbers to the span.
		Finish the copy operator.
*/