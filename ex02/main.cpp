/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:22:22 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/11 21:04:16 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int, std::list<int> > mstack;
	std::list<int> lst;

	mstack.push(5);
	mstack.push(17);
	lst.push_back(5);
	lst.push_back(17);

	std::cout << "top of mstack " << mstack.top() << std::endl;
	std::cout << "last node of lst " << lst.back() << std::endl;
	std::cout << "\nPop mstack" << std::endl;
	mstack.pop();
	std::cout << "Pop lst" << std::endl;
	lst.pop_back();
	std::cout << "size of mstack is ";
	std::cout << mstack.size() << std::endl;
	std::cout << "size of lst is ";
	std::cout << lst.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::cout << "\nIterate mstack:" << std::endl;
	MutantStack<int, std::list<int> >::iterator it = mstack.begin();
	MutantStack<int, std::list<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\nconst_Iterate mstack:" << std::endl;
	MutantStack<int, std::list<int> >::const_iterator const_it = mstack.begin();
	MutantStack<int, std::list<int> >::const_iterator const_ite = mstack.end();
	++const_it;
	--const_it;
	while (const_it != const_ite)
	{
		std::cout << *const_it << std::endl;
		++const_it;
	}

	std::cout << "\nIterate lst:" << std::endl;
	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}

	std::stack<int, std::list<int > > s(mstack);
	std::cout << "\nTest deep copy" << std::endl;
	MutantStack<int, std::list<int > > mstack2(mstack);
	std::cout << "Pop mstack" << std::endl;
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Iterate mstack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	it = mstack2.begin();
	ite = mstack2.end();
	std::cout << "Iterate mstack2:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int, std::list<int > >::reverse_iterator rit = mstack.rbegin();
	MutantStack<int, std::list<int > >::reverse_iterator rite = mstack.rend();
	std::cout << "\nTest rbegin and rend" << std::endl;
	std::cout << "reverse iterate mstack" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "constant reverse iterate mstack" << std::endl;
	MutantStack<int, std::list<int > >::const_reverse_iterator const_rit = mstack.rbegin();
	MutantStack<int, std::list<int > >::const_reverse_iterator const_rite = mstack.rend();
	while (const_rit != const_rite)
	{
		std::cout << *const_rit << std::endl;
		++const_rit;
	}

	lst.pop_back();
	std::list<int>::reverse_iterator rit_lst = lst.rbegin();
	std::list<int>::reverse_iterator rite_lst = lst.rend();
	std::cout << "reverse iterate lst" << std::endl;
	while (rit_lst != rite_lst)
	{
		std::cout << *rit_lst << std::endl;
		++rit_lst;
	}
	return (0);
}
