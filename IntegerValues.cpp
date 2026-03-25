#include <iostream>
using namespace std;

int main()
    {
        int num;
        cout << "Enter an integer value between 5 and 10" << endl;

        while (true) 
        {
            cin >> num;

            // check if input failed (non-integer)
            if (cin.fail())
            {
                cin.clear();//clear error
                cin.ignore(1000, '\n');// discard invalid input
                cout << "sorry, you entered an invalid number, please try again" << endl;

            }
            //Check range
            else if (num < 5 || num > 10) 
            {
                cout << "You entered " << num << " please enter a number between 5 and 10." << endl;
            }
            else 
            {
                break; // valid input
            }
        }
        cout << "Your input value(" << num << ") has been accepted." << endl;
        
        return 0;
         
    }
