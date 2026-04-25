#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    cout<<"obj created"<<endl;
}
Rectangle::Rectangle(float l,float w)
{
    cout<<"object created"<<endl;
    length=l;
    width=w;
}
Rectangle::~Rectangle()
{
    cout<<"destructor called"<<endl;
}
void Rectangle::setvalues(float l, float w)
{
    length = l;
    width = w;
}
void Rectangle::getvalues()
{
    cout << "length " << length <<" "<< "width " << width <<  endl;
}
float Rectangle::calculateArea()
{
    return length*width;
}