#include "Equation.h"
#include <iostream>
using namespace std;

// Функция для решения линейного уравнения ax + b = 0
void LinEquation::solveLineQuad(double a, double b, double c) 
{
    if (a == 0) {
        if (b == 0) {
            cout << "Уравнение имеет бесконечно много решений." << endl;
        }
        else {
            cout << "Уравнение не имеет решений." << endl;
        }
    }
    else {
        double x = -b / a;
        cout << "Решение линейного уравнения: x = " << x << endl;
    }
  
}

// Функция для решения квадратного уравнения ax^2 + bx + c = 0
void QuadEquation::solveLineQuad(double a, double b, double c) {

  
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два различных решения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Одно решение: x = " << x << endl;
    }
    else {
        cout << "Нет действительных решений." << endl;
    }
}

