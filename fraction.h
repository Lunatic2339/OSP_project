#pragma once

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

class fraction
{
private:
	int denom;
	int num;
	int root;
public:
	fraction();
	fraction(int denominator, int numerator);
	fraction(int denominator, int numerator, int root);

	fraction operator+(const fraction& frac);
	fraction operator-(const fraction& frac);
};