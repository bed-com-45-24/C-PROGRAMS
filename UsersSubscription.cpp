#include <iostream>
using namespace std;

int main()
{
    int daysUntilExpiration;

    // simple pseudo-random(not perfect but works without extra libraries)

    daysUntilExpiration = (7 * 3 + 5) % 12;  // you can change numbers to vary output.
    cout << "Days Until Expiration: " << daysUntilExpiration << endl;

    if (daysUntilExpiration == 0) 
    {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration == 1) 
    {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%." << endl;
    }
    else if(daysUntilExpiration <= 5)
    {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%. " << endl;
    }
    else if (daysUntilExpiration <= 10)
    {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else 
    {
        cout << "You have an active subscription." << endl;
    }
    return 0;

}    