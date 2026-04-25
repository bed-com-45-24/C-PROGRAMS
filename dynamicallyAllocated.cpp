#include <iostream>
#include <string>
using namespace std;

int main() {
    // dynamic integer
    int *num = new int;

    // dynamic string
    string *text = new string;

    // input
    cout << "Enter an integer: ";
    cin >> *num;

    cin.ignore(); // to clear buffer before getline

    cout << "Enter a string: ";
    getline(cin, *text);

    // output
    cout << "\nYou entered:\n";
    cout << "Integer: " << *num << endl;
    cout << "String: " << *text << endl;

    // free memory
    delete num;
    delete text;

    return 0;
}