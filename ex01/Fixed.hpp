/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:36:27 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/12 15:58:25 by  ikhristi        ###   ########.fr       */
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
};
        std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif