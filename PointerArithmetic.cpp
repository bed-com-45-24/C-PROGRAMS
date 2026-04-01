# include <iostream>
using namespace std;

int main ()
{
    // null pointer
    int* pPointer = nullptr;
     
    int numbersArrays[3] = {10, 20, 30};

    //assign address of first element to the pointer
    pPointer = numbersArrays;

    // output the addtess of the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArrays[0]:  " << numbersArrays << endl;

    //output the value of of the first elemnt using the pointer and indirection
    cout << "Value at ++pointer: " << *pPointer << endl;

     // This outputs the value if the second element
    cout << "Value at ++pointer: " << *(++pPointer) << endl;

    // assign address of first elemrnt to pointer
    pPointer = numbersArrays;

    // This outputs the value of the first element
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
    
}