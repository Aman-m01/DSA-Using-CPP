/*
1. print number from 101 to 200
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 101; i <= 200; i++)
    {
        cout << i << " ";
    }
    return 0;
}

/*
2. Print alphabet 'a' to 'z'
*/
#include <iostream>
using namespace std;
int main()
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i << " ";
    }
    return 0;
}

/*
3. Print number in the reverse order
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
    return 0;
}

/*
4. Print number 1 to 100 but difference is 3
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i = i + 3)
    {
        cout << i << endl;
    }
    return 0;
}

/*
5. Multiplication table
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Table of " << num << " is: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}

// // m-2
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = num; i <= num * 10; i = i + num)
    {
        cout << i << endl;
    }
    return 0;
}

/*
6. calculate power of number
*/
#include <iostream>
using namespace std;
int main()
{
    int num, pow, n;
    cout << "Enter the number; ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> pow;
    num = n;
    for (int i = 1; i < pow; i++)
    {
        num = num * n;
    }
    cout << num;

    return 0;
}

/*
7. Sum of n natural numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int num, sum;
    cout << "Enter the number: ";
    cin >> num;
    sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}

/*
8. Sum of square of n natural numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int num, square;
    cout << "Enter the number: ";
    cin >> num;
    square = 0;
    for (int i = 1; i <= num; i++)
    {
        square = square + i * i;
    }
    cout << square;
    return 0;
}

/*
9. Factorial of a number
*/
#include <iostream>
using namespace std;
int main()
{
    int num, factorial;
    cout << "Enter the number: ";
    cin >> num;
    factorial = 1;
    for (int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}

/*
10. Check the number is prime number or not
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num < 2)
    {
        cout << "Not a prime number";
        return 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "not a prime number";
                return 0;
            }
        }

        cout << "Prime Number";
        return 0;
    }

    return 0;
}

/*
11. Fibonnaci series of a number  -> 0, 1, 1, 2, 3, 5,...
*/
#include <iostream>
using namespace std;
int main()
{
    int num, first_term = 0, second_term = 1, next_term = 0;
    cout << "Enter the number of terms: ";
    cin >> num;
    cout << "Fibonacci Series: " << first_term << ", " << second_term << ", ";
    for (int i = 3; i <= num; ++i)
    {
        next_term = first_term + second_term;
        cout << next_term << ", ";
        first_term = second_term;
        second_term = next_term;
    }
    cout << "...\n";
    return 0;
}