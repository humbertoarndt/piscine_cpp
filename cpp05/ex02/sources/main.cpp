/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:40:01 by harndt            #+#    #+#             */
/*   Updated: 2023/06/21 18:07:51 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
	TODOS
	[ ] Create tests on main.
	[ ] Documment code.
	[x] From class Form, create class AForm
	[x] Create class ShrubberyCreationForm
	[x] Create class RobotomyRequestForm
	[x] Create class PresidentialPardonForm
*/

int	main(void)
{
	std::cout << "\nForm Constructors ===========================" << std::endl;
	/* ShrubberyCreationForm testing simple */
	ShrubberyCreationForm form1("1berto");
	Bureaucrat b1("Humberto", 1);

	/* RobotomyRequestForm testing simple */
	RobotomyRequestForm form2("2berto");
	Bureaucrat b2("Doisberto", 1);

	/* PresidentialPardonForm testing simple */
	PresidentialPardonForm form3("3berto");
	Bureaucrat b3("Trê3berto", 1);

	/* Signing forms */
	form1.beSigned(b1);
	form2.beSigned(b2);
	form3.beSigned(b3);

	/* Execute form functions */
	LOG(" ");
	form1.execute(b1);
	form2.execute(b2);
	form3.execute(b3);

	std::cout << "\nForm Destructors ===========================" << std::endl;
	return (0);
}