#include "fraction.h"

fraction::fraction()
	: denom(1), num(1)
{
}

fraction::fraction(int denominator, int numerator)
	: denom(denominator), num(numerator)
{
}

fraction::fraction(int denominator, int numerator, int root)
	: denom(denominator), num(numerator), root(root)
{
}

fraction fraction::operator+(const fraction& frac)
{
	int x = gcd(this->denom * frac.denom, this->num * frac.denom + frac.num * this->denom);
	return fraction((this->denom * frac.denom)/x, (this->num * frac.denom + frac.num * this->denom)/x);
}

fraction fraction::operator-(const fraction& frac)
{
	int x = gcd(this->denom * frac.denom, this->num * frac.denom + frac.num * this->denom);
	return fraction((this->denom * frac.denom) / x, (this->num * frac.denom - frac.num * this->denom) / x);
}

fraction fraction::operator*(const fraction& frac)
{
	int x = gcd(this->denom * frac.denom, this->num * frac.num);
	return fraction((this->denom * frac.denom) / x, (this->num * frac.num) / x);
}

fraction fraction::operator/(const fraction& frac)
{
	int x = gcd(this->denom * frac.num, this->num * frac.denom);
	return fraction((this->denom * frac.num) / x, (this->num * frac.denom) / x);
}
