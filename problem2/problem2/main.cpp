#include <iostream>
#include <string>

using namespace std;

int main()
{
    int currentReading, previousReading, unpaidBalance;
    cout << "Enter your current water meter reading:" << endl;
    cin >> currentReading;
    cout << "Current water meter reading: " << currentReading << endl;
    cout << "Enter your previous water meter reading:";
    cin >> previousReading;
    cout << "Previous water meter reading: " << previousReading << endl;
    cout << "Enter unpaid balance:" << endl;
    cin >> unpaidBalance;
    cout << "Unpaid balance: P" << unpaidBalance << endl;
    
    if (unpaidBalance > 0)
    {
        cout << "You have incurred a P20 late charge due to unpaid bills" << endl;
        cout << "Water bill: P" << (((currentReading-previousReading)*1.10)+20)+unpaidBalance << endl;
    }
    else
    {
        cout << "Water bill: P" << (currentReading-previousReading)*1.10 << endl;
    }
    return 0;
}

