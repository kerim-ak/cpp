/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:19:13 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 16:45:38 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_frac;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_frac));
}

Fixed::Fixed(const Fixed& num)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = num.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& num)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &num)
	{
		this->_value = num.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->_value < other._value);
}
		
bool Fixed::operator>=(const Fixed& other) const
{
	return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));	
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_value++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed  Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_value--;
	return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBiFixed::ts member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_frac));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_frac);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
