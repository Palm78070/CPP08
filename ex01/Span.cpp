/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:44:22 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/03 22:33:05 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		if (!this->_lst.empty())
			this->_lst.clear();
		this->_N = src._N;
		this->_lst = src._lst;
	}
	return (*this);
}

Span::~Span()
{
}

const char *Span::FullMember::what() const throw()
{
	return ("Member in container is already full");
}

void Span::addNumber(int n)
{
	try
	{
		if (this->_lst.size() > (this->_N - 1))
			throw Span::FullMember();
		this->_lst.push_back(n);
	}
	catch (Span::FullMember &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int Span::longestSpan(void)
{
	std::list<int>::iterator max = std::max_element(this->_lst.begin(), this->_lst.end());
	std::list<int>::iterator min = std::min_element(this->_lst.begin(), this->_lst.end());
	return (*max - *min);
}

int Span::shortestSpan(void)
{
	std::list<int> lst_sort = this->_lst;
	int res = *max_element(this->_lst.begin(), this->_lst.end());
	lst_sort.sort();
	for (std::list<int>::iterator it = lst_sort.begin(); it != lst_sort.end(); ++it)
	{
		std::list<int>::iterator tmp = it;
		for (std::list<int>::iterator it2 = ++tmp; it2 != lst_sort.end(); ++it2)
		{
			if (res > std::abs(*it2 - *it))
				res = std::abs(*it2 - *it);
		}
	}
	return (res);
}

const char *Span::ExceedCapacity::what() const throw()
{
	return ("The range of number is exceed full capacity");
}

void Span::addRangeNumber(const std::list<int>::iterator &begin, const std::list<int>::iterator &end)
{
	try
	{
		if (this->_N < std::distance(begin, end))
			throw Span::ExceedCapacity();
		this->_lst.insert(this->_lst.begin(), begin, end);
	}
	catch (Span::ExceedCapacity &e)
	{
		std::cout << e.what() << std::endl;
	}
}
