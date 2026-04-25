#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    polygon poly;
    polygon* pPoly1 = &rect;
    polygon* pPoly2 = &trgl;
    polygon* pPoly3 = &Poly;
    pPoly1 -> setvalues(4,5);
    pPoly2 -> setvalues(4,5);
    pPoly3 -> setvalues(4, 5);
    
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';
    cout << poly.Area() << '\n';
    return 0; 

}