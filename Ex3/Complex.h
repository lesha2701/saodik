#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class complex
{
public:
	double Re, Im;
	complex(double re = 0, double im = 0) {
		Re = re;
		Im = im;
	}

	// операция +
	complex operator +(const complex& c)const
	{
		return complex(Re + c.Re, Im + c.Im);
	}

	// операция -
	complex operator -(const complex& c)const
	{
		return complex(Re - c.Re, Im - c.Im);
	}

	// операция *
	complex operator *(const complex& c)const
	{
		return complex(Re * c.Re - Im * c.Im, Re * c.Im + c.Re * Im);
	}

	// операция /
	complex operator /(const complex& c)const
	{
		return complex((Re * c.Re + Im * c.Im) / (c.Re * c.Re + c.Im * c.Im), (-Re * c.Re + Im * Re) / (c.Re * c.Re + c.Im * c.Im));
	}

	complex Conjugate() {
		complex a1(Re, -Im);
		return a1;
	}
	double Mod() {
		return sqrt(Re * Re + Im * Im);
	}
	double Arg() {
		if (Mod() == 0) {
			return 0;
		}
		else if (Re > 0) {
			return atan(Im / Re);
		}
		else if (Re < 0) {
			if (Im >= 0) {
				return acos(-1) + atan(Im / Re);
			}
			else if (Im < 0) {
				return -acos(-1) - atan(Im / Re);
			}
		}
		else {
			if (Im > 0) {
				return acos(0);
			}
			else if (Im < 0) {
				return -acos(0);
			}
		}
	}
	double getRe() {
		return Re;
	}
	double getIm() {
		return Im;
	}
};

inline ostream& operator << (ostream& o, const complex& c)
{
	o << '(' << c.Re << ", " << c.Im << ')';
	return o;
}
