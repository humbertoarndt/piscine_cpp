/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:08:26 by harndt            #+#    #+#             */
/*   Updated: 2023/07/19 17:41:15 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// =============================================================================
// Includes
// =============================================================================

#include <iostream>		//std::cout, std::cerr, std::endl
#include <algorithm>	//std::sort
#include <vector>		//std::vector<int>, push_back(), begin(), end(), 
						//front(), back()

// =============================================================================
// Macros
// =============================================================================

#define LOG(x) std::cout << x << RESET_COLOR << std::endl;
#define ERROR(x) std::cerr << x << RESET_COLOR << std::endl;
typedef std::vector<int>	intv;
#define RESET_COLOR	"\033[0m"
#define MAGENTA		"\033[0;35m"
#define YELLOW		"\033[0;33m"
#define CYAN		"\033[0;36m"

// =============================================================================
// Class
// =============================================================================

class Span
{
	private:
		unsigned int	N;
		intv			_range;

	public:
		/* Orthodox Canonical Form methods */
		Span(void);
		Span(unsigned int);
		Span(Span const &src);
		~Span(void);
		Span &operator = (Span const &rhs);

		/* Member Functions */
		void			addNumber(int n);
		void			addNumber(intv::iterator begin, intv::iterator end);
		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);
		intv const		&getRange(void) const;
		
		/* Exceptions */
		class RangeFullException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

std::ostream &operator << (std::ostream &o, Span const &span);