/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:15:35 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/28 14:40:39 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(const Fixed &a, const Fixed &b);
		Point(const Point &other);
		Point& operator=(Point& other);
		~Point();
		
		static bool bsp( Point const a, Point const b, Point const c, Point const point);
		static float area(float x1, float y1, float x2, float y2, float x3, float y3);
} ;

#endif