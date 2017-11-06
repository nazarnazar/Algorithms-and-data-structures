#pragma once
#include <iostream>

class Complex
{
private:
	float re, im;
	
public:
	Complex(float, float);
	float Re() const;
	float Im() const;
	Complex& operator*=(const Complex&);
	Complex& operator+=(const Complex&);
};

std::ostream& operator<<(std::ostream&, const Complex&);