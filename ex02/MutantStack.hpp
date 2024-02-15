#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>
#include <list>

template <class T>
class MutantStack : public std::stack<T> {
	private:
	public:
		MutantStack(){};
		MutantStack(const MutantStack &other){
			*this = other;
		};
		MutantStack &operator=(const MutantStack &other){
			std::stack<T>::operator=(other);
			return *this;
		};
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){
			return(std::stack<T>::c.begin());
		}
		iterator end(){
			return(std::stack<T>::c.end());
		}
};
	template <class T>
	std::ostream operator<<(std::ostream& o, MutantStack<T> const &ms){};

#endif

/*
Hey there, we were wondering if we can set up a meeting next week to discuss about the log hours required for Kela.
Would you have time to sit down with a few Hexagon members next week's Monday afternoon? 
*/