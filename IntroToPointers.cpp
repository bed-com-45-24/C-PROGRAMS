#include <iostream>
using namespace std;
 
int main()
{
    //declare pointer and initialize it
    //so that it doesnt stote a random address
    int* pPointer = nullptr;
    int integervar = 5;

    // assign pointer to address of object
    pPointer = &integervar;

    //output the address of the integervar
    cout << "Address of integervar: " << &integervar << endl;

    //output the address of the pPointer
    cout << "pPointer: " << pPointer << endl;

   // output the address of the pPointer
    cout << "Address of pPointer:  " << &pPointer << endl;

    return 0;
}    

