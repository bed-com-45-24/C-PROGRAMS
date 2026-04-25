#pragma once
#include <iostream>
using namespace std;

class Shape
{
private:
    float length;
public:
    Shape();
    ~Shape();
    void setvalue();
    void getvalues();
    float calculate(float a, float b);
};

class rectangle:public Shape
{
float width;

public:
float parameter(float a, float b){
    return (a*2)+(b*2);
}
};

int main()
{
    rectangle rectangle1();
    
}
