/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:03:41 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/04 02:34:00 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
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

	typedef typename std::deque<T>::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	};
	iterator end(void)
	{
		return (this->c.end());
	};
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	reverse_iterator rbegin(void)
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend(void)
	{
		return (this->c.rend());
	}
};

#endif
