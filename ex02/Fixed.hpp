/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:05:55 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/12 16:08:25 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fixed;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed();
        Fixed(const Fixed &other);//copy constructor
        Fixed &operator=(const Fixed &other);//assignment operator
        int getRawBits(void) const;
        void    setRawBits( int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        //comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		//incr/decr operatos
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		
		//math operators
		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		
		//functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};
        std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif