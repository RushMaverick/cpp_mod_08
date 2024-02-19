#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <list>

template <typename T>
int easyfind(T &bucket, int n){
	typename T::iterator it = std::find(bucket.begin(), bucket.end(), n);
	if (it == bucket.end())
		throw std::exception();
	return *it;
}

#endif