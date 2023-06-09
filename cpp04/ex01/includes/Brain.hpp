/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:54:02 by harndt            #+#    #+#             */
/*   Updated: 2023/06/09 18:50:23 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// =============================================================================
// INCLUDES
// =============================================================================

#include <iostream>

// =============================================================================
// MACROS
// =============================================================================

#define LOG(x) std::cout << x << std::endl;
#define MAX_IDEAS 100

// =============================================================================
// CLASS
// =============================================================================

class Brain
{
	private:
		std::string	_ideas[MAX_IDEAS];
		
	public:
		/* Orthodox Canonical Form methods */
		Brain(void);
		Brain(Brain const &src);
		Brain &operator = (Brain const &rhs);
		~Brain(void);

		/* Member Functions */
		void	setIdea(size_t i, std::string idea);
		std::string	getIdea(size_t i) const;
};