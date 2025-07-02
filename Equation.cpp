#include "Equation.h"
#include <iostream>
using namespace std;

// ������� ��� ������� ��������� ��������� ax + b = 0
void LinEquation::solveLineQuad(double a, double b, double c) 
{
    if (a == 0) {
        if (b == 0) {
            cout << "��������� ����� ���������� ����� �������." << endl;
        }
        else {
            cout << "��������� �� ����� �������." << endl;
        }
    }
    else {
        double x = -b / a;
        cout << "������� ��������� ���������: x = " << x << endl;
    }
  
}

// ������� ��� ������� ����������� ��������� ax^2 + bx + c = 0
void QuadEquation::solveLineQuad(double a, double b, double c) {

  
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "��� ��������� �������: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "���� �������: x = " << x << endl;
    }
    else {
        cout << "��� �������������� �������." << endl;
    }
}

