/* take the input precentage of a student and print the grade a/c to the marks %.
1. 81-100 A
2. 61-80 B
3. 41-60 C
4. <= 40 D
5.else, enter a valid input
*/

#include <iostream>
using namespace std;
int main()
{
    float marksPrecent;
    cout << "Enter your marks_precentage: ";
    cin >> marksPrecent;
    if (marksPrecent >= 80 && marksPrecent <= 100)
    {
        cout << "Grade A";
    }
    else if (marksPrecent >= 60 && marksPrecent < 80)
    {
        cout << "Grade B";
    }
    else if (marksPrecent >= 40 && marksPrecent < 60)
    {
        cout << "Grade C";
    }
    else if (marksPrecent < 40 && marksPrecent > 0)
    {
        cout << "Grade D";
    }
    else if (marksPrecent > 100 || marksPrecent <= 0)
    {
        cout << "Please enter a valid precentage";
    }
    else
    {
        cout << "Invalid input";
    }
    return 0;
}