/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 03:53:14 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

#define BEST_GRADE 1
#define WORST_GRADE 150

class Form;

class Bureaucrat
{
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat(const Bureaucrat & src);
    Bureaucrat & operator=(const Bureaucrat & rhs);
    Bureaucrat operator++(int);
    Bureaucrat & operator++(void);
    Bureaucrat operator--(int);
    Bureaucrat & operator--(void);

    std::string getName(void) const;
    int getGrade(void) const;

    void signForm(Form & form);

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();
        GradeTooHighException(const GradeTooHighException & rhs);
        GradeTooHighException & operator=(const GradeTooHighException & src);
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw();
        GradeTooLowException(const GradeTooLowException & rhs);
        GradeTooLowException & operator=(const GradeTooLowException & src);
        virtual const char *what() const throw();
    };

private:
    std::string _name;
    int _grade;
    Bureaucrat(void);
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs);

#endif
