#include <iostream>
using namespace std;
#pragma once

class Equation
{
public:
	virtual void solveLineQuad(double a, double b, double c) = 0;
	virtual ~Equation() {}
};

class LinEquation : public Equation
{
private:
	double a, b, c;

public:
	LinEquation(double a, double b, double c)
		: a(a), b(b), c(c) {
	};

	void solveLineQuad(double a, double b, double c) override;



};

class QuadEquation : public Equation
{
private:

	double a, b, c;

public:
	QuadEquation(double a, double b, double c)
		: a(a), b(b), c(c) {
	};
	void solveLineQuad(double a, double b, double c);


};