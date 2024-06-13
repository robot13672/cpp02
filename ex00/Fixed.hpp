/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:32:05 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/11 13:33:44 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);//copy constructor
        Fixed &operator=(const Fixed &other);//assignment operator
        int getRawBits(void) const;
        void    setRawBits( int const raw);
};

#endif