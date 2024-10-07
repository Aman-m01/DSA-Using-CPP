/*
1. print the number 1 to 5
*/ 
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    return 0;
}

/*
2. print hello world 10 times
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " Hello World" << endl;
    }
    return 0;
}

/*
3. print all even number upto 20
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

/*
4. print n natural numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}