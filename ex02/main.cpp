/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:05:58 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/12 16:14:50 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    //subject
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    //my tests
    int c = 5;
    int d = 3;
    std::cout << std::endl << "My tests!" << std::endl;
    std::cout << "5 + 3 = " << c + d << std::endl;
    std::cout << "5 - 3 = " << c - d << std::endl;
    std::cout << "5 * 3 = " << c * d << std::endl;
    std::cout << "5 / 3 = " << c / d << std::endl;
    std::cout << "5++ = " << c++ << std::endl;
    std::cout << "++5 = " << ++c << std::endl;
    std::cout << "5-- = " << c-- << std::endl;
    std::cout << "--5 = " << --c << std::endl;
    std::cout << "5 != 3 = " << (c != d) << std::endl;
    std::cout << "5 > 3 = " << (c > d) << std::endl;
    std::cout << "5 < 3 = " << (c < d) << std::endl;
    std::cout << "5 == 3 = " << (c == d) << std::endl;
    return 0;
}