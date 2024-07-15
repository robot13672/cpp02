/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:32:03 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 12:38:54 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed);
}

Fixed::Fixed(const Fixed &other) 
{
    std::cout << "Copy constructor called" << std::endl;
    fixed = other.fixed;
}

void Fixed::setRawBits( int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    fixed = raw;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = other.getRawBits();
    return (*this);
}