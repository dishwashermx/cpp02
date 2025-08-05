/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:15:31 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/28 14:42:11 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Point constructor called" << std::endl;
}

Point::Point(const Fixed &a, const Fixed &b) : x(a), y(b) {
	std::cout << "Parameterised Point constructor called" << std::endl;
}

Point::Point(const Point &other) : x(other.x), y(other.y) {
	std::cout << "Point copy constructor called" << std::endl;	
}

Point& Point::operator=(Point &other) {
	if (this != &other) {
		
	}
	std::cout << "Point copy assignment operator called" << std::endl;
	return (*this);
}

Point::~Point() {
	std::cout << "Point destructor called" << std::endl;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point) {
	float A = area(a.x.toFloat(), a.y.toFloat(), b.x.toFloat(), b.y.toFloat(), c.x.toFloat(), c.y.toFloat());
	float A1 = area(point.x.toFloat(), point.y.toFloat(), b.x.toFloat(), b.y.toFloat(), c.x.toFloat(), c.y.toFloat());
	float A2 = area(a.x.toFloat(), a.y.toFloat(), point.x.toFloat(), point.y.toFloat(), c.x.toFloat(), c.y.toFloat());
	float A3 = area(a.x.toFloat(), a.y.toFloat(), b.x.toFloat(), b.y.toFloat(), point.x.toFloat(), point.y.toFloat());

	if (A1 + A2 + A3 == A)
		return (true);
	else
		return(false);
}

float Point::area(float x1, float y1, float x2, float y2, float x3, float y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
