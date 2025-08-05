/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:27:02 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/06 13:36:10 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) {
	Fixed z(-4.1f);
	std::cout << z << z.toInt() << std::endl;
	Point a(0, 0);
	Point b(10, 10);
	Point c (10, -10);
	Point point(5, -3.2f);
	
	bool result = Point::bsp(a, b, c, point);
	std::cout << result << std::endl;
	return (result);
}