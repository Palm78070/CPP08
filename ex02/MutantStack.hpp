/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:03:41 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/12 13:43:59 by rath             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <deque>
#include <stack>

template <typename T, class C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:
	MutantStack(void){};
	MutantStack(const MutantStack &src) { *this = src; };
	MutantStack &operator=(const MutantStack &src)
	{
		if (this != &src)
			this->c = src.c;
		return *this;
	};
	~MutantStack(void){};

	typedef typename C::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	};
	iterator end(void)
	{
		return (this->c.end());
	};
	typedef typename C::const_iterator const_iterator;
	const_iterator begin(void) const
	{
		return (this->c.begin());
	};
	const_iterator end(void) const
	{
		return (this->c.end());
	}
	// typedef typename C::reverse_iterator reverse_iterator;
	// reverse_iterator rbegin(void)
	// {
	// 	return (this->c.rbegin());
	// };
	// reverse_iterator rend(void)
	// {
	// 	return (this->c.rend());
	// };
	// typedef typename C::const_reverse_iterator const_reverse_iterator;
	// const_reverse_iterator rbegin(void) const
	// {
	// 	return (this->rebegin());
	// };
	// const_reverse_iterator rend(void) const
	// {
	// 	return (this->rend());
	// };
};

#endif
