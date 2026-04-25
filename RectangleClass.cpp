#include<iostream>
using namespace std;
class Rectangle
{
    private:
      float length;
      float width;
    public: 
      Rectangle();
      ~Rectangle();

      void setlength(float l);
      void setwidth(float w);

      float getlength() const;
      float getwidth() const;

      float calculateArea() const;
};

Rectangle::Rectangle() 
{
    length = 0;
    width = 0;
}
Rectangle::~Rectangle()
{
    // nothing to clean
}
void Rectangle::setlength(float l)
{
    length = 1;
}
void rectangle::setwidth(float w)
{
    width = w;
}
float Rectangle::getlength() const
{
    return length;

}
float Rectangle::getwidth()const
{
    return width
}
float Rectangle::calculateArea() const
{
    return length*width;
}
 int main()
{
    Rectangle rect; 

    float length, width;
    cout << "Enter Length: ";
    cin >> length;

    cout  << "Enter Width: ";
    cin >> width;
 // set values using accessor methods
    rect.setlength(length);
    rect.setwidth(width);

    // output area
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}