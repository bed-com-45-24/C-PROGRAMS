#include <iostream>
using namespace std;

int main()
{
    int firstvalue;
    int secondvalue;

    int* pPointer = nullptr;

    // assign pointer with thne addtess of the firstvalue
    pPointer = &firstvalue;
    *pPointer = 10; //Indirection

    // assign pointer with the address of the secondvalue
    pPointer = &secondvalue;
    *pPointer = 20;//indirection

    cout << "fisrvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    return 0;
}
