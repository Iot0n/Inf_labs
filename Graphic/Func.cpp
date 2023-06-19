#include"Func.h"
#include <cmath>


double sinus(double x) {
	return sin(2 * pow(x, 3));
}

double exppo(double x) {
	double exp = 2.7182818284;
	double a = pow(exp, -pow(x, 2)/2)*x;
	return a;
}

double polynom(double x) {
	return pow(x, 4) + 2 * pow(x, 3) - 7.8 * pow(x, 2) + 2 * x - 22.3;
}

double boom(double x) {
	return (cos(3.14*x/2))*sin(x*x) / 3;
}

double multicos(double x) {
	return 3*cos(pow(x, 2));
}