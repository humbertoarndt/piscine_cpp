/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:21:14 by harndt            #+#    #+#             */
/*   Updated: 2023/08/04 14:13:50 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// =============================================================================
// Includes
// =============================================================================

#include <algorithm>	//	std::sort
#include <climits>		//	INT_MAX
#include <cstdlib>		//	std::strtol
#include <deque>		//	std::deque<int>
#include <iomanip>		//	std::setprecision
#include <iostream>		//	std::cout, std::cerr
#include <sys/time.h>	//	timeval
#include <vector>		//	std::vector<int>

// =============================================================================
// Macros
// =============================================================================

#define LOG(x) std::cout << x << EOC << std::endl;
#define ERROR(x) std::cerr << x << EOC << std::endl;
#define EOC				"\e[0m"
#define MAGENTA	"\e[1;35m"

// =============================================================================
// Class
// =============================================================================

class PmergeMe
{
	private:
		/* Vector Attributes */
		std::vector<int>				_vector;
		std::vector<std::vector<int> >	_vectorPairs;
		std::vector<int>				_auxVector;
		std::vector<int>				_sortedVector;
		struct timeval					_vectorStart;
		struct timeval					_vectorEnd;

		/* Dequeu Attributes */
		std::deque<int>					_deque;
		std::deque<std::deque<int> >	_dequePairs;
		std::deque<int>					_auxDeque;
		std::deque<int>					_sortedDeque;
		struct timeval					_dequeStart;
		struct timeval					_dequeEnd;
	
	public:
		/* Orthodox Canonical Form methods */
		PmergeMe(void);
		PmergeMe(PmergeMe const &src);
		PmergeMe(int size, char **elements);
		PmergeMe &operator = (PmergeMe const &rhs);
		~PmergeMe(void);

		/* Vector Member Functions */
		void	initVector(int size, char **elements);
		void	printVector(void);
		void	printSortedVector(void);
		void	getPairs(void);
		void	sortPairs(void);
		void	sortPairsVector(void);
		void	fillVector(void);
		void	fillSortedVector(void);

		/* Vector Member Functions */
		void	initDeque(int size, char **elements);
		void	printDeque(void);
		void	printSortedDeque(void);
		void	getPairsDeque(void);
		void	sortPairsDeque(void);
		void	sortPairsDequeLargest(void);
		void	fillDeque(void);
		void	fillSortedDeque(void);

		/* Member Functions */
		void	showLog(void);
		void	checkSize(int size);
		void	checkInput(int size, char **elements);
		void	checkDuplicates(int size, char **elements);

		/* Exceptions */
		class BadInputException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};