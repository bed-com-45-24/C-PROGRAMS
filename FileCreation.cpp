#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // create and open a text file of ofstream Myfile("exampleFile.txt");
    ofstream MyFile("exampleFile.txt"); 
    // close the file 
    MyFile.close();
    MyFile << "John, Mary, Peter";

    return 0;

}