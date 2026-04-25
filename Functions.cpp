#include <iostream>
using namespace std;

void Helloword()
{
    cout << "Hello World!!"<< endl;
}
int Add (int valueA, int valueB)
{
    return valueA + valueB;
}

int main()
{
   int sum = Add(4,8);
   cout << sum <<endl; 
   return 0;

} 