#include <iostream>
using namespace std;

//function declarations.
double squareArea(double side)
{
    return side*side;
}
double rectangleArea(double length,double width)
{
    return length*width;
}
double triangleArea(double base, double height) 
{
    return 0.5 * base * height;
}
int main() 
{
    int choice;
    while(true)
    {
        cout << " \nPlease select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. quit program\n";
        cout << "Enter selection  ";
        cin >> choice;

        //Handel invalid input(non integer)
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input!!! Please enter a number. \n";
            continue;
        }

      
        if(choice == 1)
        {
        double side;
        cout << "Enter side: ";
        cin >> side;
        cout << "Area = " << squareArea(side) << endl;
        }

        else if (choice == 2)
        {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area = " << rectangleArea(length,width) << endl;
        
        }
        else if (choice == 3)
        {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area = " << triangleArea(base, height)<< endl;

        }

        else if (choice == 4)
        {
            cout << "Program terminated. " << endl;
            break;
            

        }
        
        else 
        {
            cout << "Your input was " << choice << "Which is an invalid input\n";
            cout << "Please Enter a valid input!!!\n";
      
        }
      

    }
    return 0;
}