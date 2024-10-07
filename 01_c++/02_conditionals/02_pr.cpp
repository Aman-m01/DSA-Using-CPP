// number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    return 0;
}

// negative or positive nukmber
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " Enter the number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "positive number";
    }
    else if (num < 0)
    {
        cout << "Negative number";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}
