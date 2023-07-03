/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:37:14 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/03 22:35:19 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span
{
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &src);
	Span &operator=(const Span &src);
	~Span(void);

	void addNumber(int n);
	void addRangeNumber(const std::list<int>::iterator &begin, const std::list<int>::iterator &end);
	int shortestSpan();
	int longestSpan();

	class FullMember : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class ExceedCapacity : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	unsigned int _N;
	std::list<int> _lst;
};

#endif
