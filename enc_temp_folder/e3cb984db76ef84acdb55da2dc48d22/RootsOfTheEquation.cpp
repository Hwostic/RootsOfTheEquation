#include "Equation.h"

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Ru");

    double a, b, c;
    Equation* Equations;

   

    cout << "Введите коэффициенты для линейного уравнения:\nа: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    Equation* line = new LinEquation(a, b, 0);
    line->solveLineQuad(a, b, 0);

  
    cout << "Введите коэффициенты для квадратного уравнения:\nа: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    Equation* quadEquation = new QuadEquation(a, b, c);
     quadEquation->solveLineQuad(a, b, 0);
   
     delete line;
     delete quadEquation;
    
    return 0;
}

