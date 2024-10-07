// taking input from user and perform operations (+, -, *, /)
#include <iostream>
using namespace std;
int main()
{
    cout << "Perform arithmetic operations(+,-,*,/): " << endl;
    float num1;
    cin >> num1;
    char op;
    cin >> op;
    float num2;
    cin >> num2;

    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else if (op == '/')
    {
        cout << num1 / num2;
    }
    else if (op == '+')
    {
        cout << num1 + num2;
    }
    else
    {
        cout << "Invalid operator";
    }

    return 0;
}