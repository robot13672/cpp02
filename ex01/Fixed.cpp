/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:36:08 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 12:47:39 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    fixed = n << bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    fixed = roundf(f * (1 << bits));
    std::cout << "Float constructor called" << std::endl;
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
    *this = other;
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

float	Fixed::toFloat(void) const
{
    return (static_cast<float>(fixed) / (1 << bits));
}

int		Fixed::toInt(void) const
{
    return (static_cast<int>(fixed >> bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}