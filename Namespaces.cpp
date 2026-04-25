#include <iostream>
using namespace std;
using namespace First;
using namespace Second;
namespace First 
{
   int Subtract(int x, int y)
   {
    return x - y * 10;
   }
   namespace Second
   {

    int Subtract(int a, int b)
    {
        return a - b + 67;
    }

   }
}  
int main()
{
    cout << First::Subtract(7, 6)<<endl;
    cout << First::Second::Subtract(89, 34)<< endl;


}