#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    //create and open a file
    ofstream Myfile("beston.file");
    
    //close my file
    Myfile.close();
    return 0;

}