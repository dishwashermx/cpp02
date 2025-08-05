/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/28 13:21:32 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int i) {
	std::cout << "Fixed int constructor called" << std::endl;
	this->_value = i << _bits;
}

Fixed::Fixed(float f) {
	std::cout << "Fixed float constructor called" << std::endl;
	this->_value = f * (1 << _bits);
}

Fixed::Fixed() {
	std::cout << "Fixed constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Fixed copy constructor called" << std::endl;
	this->_value = other._value;
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Fixed copy assignment operator called" << std::endl;
	this->_value = other._value;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "Fixed getRawBits member function called" << std::endl;
	return(this->_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "Fixed setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << _bits));
}

int Fixed::toInt(void) const {
	return (this->_value >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed &other) const{
	return(this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const{
	return(this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const{
	return(this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const{
	return(this->_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const{
	return(this->_value >= other._value);
}

bool Fixed::operator!=(const Fixed &other) const{
	return(this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const {
	return(Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++() {
	++this->_value;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++this->_value;
	return (temp);
}

Fixed& Fixed::operator--() {
	--this->_value;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	++this->_value;
	return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return ((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return ((a > b) ? a : b);
}