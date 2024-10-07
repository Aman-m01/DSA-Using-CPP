/*
1. take length and breadth of a rectangle as an input from the users, wap to find whether the area of rectangle is greater then its peimeter.
*/
#include <iostream>
using namespace std;
int main()
{
    float length, breadth, Area, Perimeter;
    cout << "Enter the length and bradth of rectangle: ";
    cin >> length >> breadth;
    Area = length * breadth;
    Perimeter = 2 * (length + breadth);
    if (Area > Perimeter)
    {
        cout << "Area is (" << Area << ")" << " greater than perimeter (" << Perimeter << ")";
    }
    else if (Area < Perimeter)
    {
        cout << "Area is (" << Area << ")" << " less than perimeter (" << Perimeter << ")";
    }
    else
    {
        cout << "Both (Area & Perimeter) are equal";
    }
    return 0;
}

/*
2. take positive integar and tell if it is three digit number or not
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num > 0)
    {
        if (num > 99 && num < 1000)
        {
            cout << num << " is a 3digit number";
        }
        else
        {
            cout << num << " is not a 3digit number";
        }
    }
    else
    {
        cout << "Enter a positive integar";
    }
    return 0;
}

/*
3. Take a number and tells it is divisible by 5 or 3 or not.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << num << " is divisible by both 3 and 5";
    }
    else if (num % 5 == 0)
    {
        cout << num << " is divisible by 5";
    }
    else if (num % 3 == 0)
    {
        cout << num << " is divisible by 3";
    }
    else
    {
        cout << num << " is neither divisible by 3 or 5";
    }
    return 0;
}

/*
4. wap to print the ASCII Table
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII Table:" << endl;
    cout << "Character ASCII Value" << endl;

    for (int i = 0; i <= 127; i++)
    {
        cout << char(i) << "\t\t" << i << endl;
    }
    return 0;
}

/*
5. Take three positive number input and print the greatest of them
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three positive numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 > 0 && num2 > 0 && num3 > 0)
    {

        if (num1 >= num2 && num1 >= num3)
        {
            cout << "The greatest number is: " << num1 << endl;
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            cout << "The greatest number is: " << num2 << endl;
        }
        else
        {
            cout << "The greatest number is: " << num3 << endl;
        }
    }
    else
    {
        cout << "invalid inputs";
    }

    return 0;
}

/*
6. Given a point (x,y), wap to find out if it lies in the first quadrant, 2nd quadrant, 3rd quadrant, 4th quadrant on the x-axis, y-axis at the origin.
*/
#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "The point is at the origin." << endl;
    }
    else if (x == 0)
    {
        cout << "The point lies on the y-axis." << endl;
    }
    else if (y == 0)
    {
        cout << "The point lies on the x-axis." << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "The point lies in the first quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point lies in the second quadrant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point lies in the third quadrant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point lies in the fourth quadrant." << endl;
    }

    return 0;
}

/*
7. Write a program to create a calculator that performs basics arithmetics operations using switch case. the calculator should input two numbers and operator b/w them.
*/
#include <iostream>
using namespace std;
int main()
{
    float num1;
    cin >> num1;
    char op;
    cin >> op;
    float num2;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Invalid Operator";
        break;
    }
    return 0;
}

/*
8. Create a program  using ternary operator
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, greatest_num;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    greatest_num = (num1 > num2) ? num1 : num2;
    cout << "The greatest number is: " << greatest_num << endl;

    return 0;
}

