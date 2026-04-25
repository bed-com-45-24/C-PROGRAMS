#pragma once
# include <iostream>
using namespace std;

class Rectangle 
{
    private: 
       float length;
       float width;
    public:
       Rectangle();
       Rectangle(float l, float w);
       ~Rectangle();
       void setvalues(float l, float w);
       void getvalues();
       float calculateArea();

};