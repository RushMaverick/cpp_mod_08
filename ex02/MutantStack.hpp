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
		MutantStack(const MutantStack &other){};
		MutantStack &operator=(const MutantStack &other) {};
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		iterator begin(){
			return(std::stack<T>::c.begin());
		}
		iterator end(){
			return(std::stack<T>::c.end());
		}
		const_iterator begin() const{
			return(std::stack<T>::c.begin());
		}
		const_iterator end() const{
			return(std::stack<T>::c.end());
		}
};
	template <class T>
	std::ostream operator<<(std::ostream& o, MutantStack<T> const &ms){};

#endif
