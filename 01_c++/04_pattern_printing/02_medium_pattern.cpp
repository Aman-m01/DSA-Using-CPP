// pattern problems
/*
1. Print this pattern
   *
   * *
   * * *
   * * * *
   * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
2. Print this pattern
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            cout << column << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
3. Print this pattern
   1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
4. Print this pattern
   1
   2 1
   3 2 1
   4 3 2 1
   5 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = row; column >= 1; column--)
        {
            cout << column << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
5. Print this pattern
   a
   b b
   c c c
   d d d d
   e e e e e
*/
#include <iostream>
using namespace std;
int main()
{
    char row, column;
    for (row = 'a'; row <= 'e'; row++)
    {
        for (column = 'a'; column <= row; column++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}

// m-2
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        char name = 'a' + row - 1;
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
6. Print this pattern
   * * * * *
   * * * *
   * * *
   * *
   *
*/
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 5; row >= 1; row--)
    {
        for (col = row; col >= 1; col--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// m-2
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - (row - 1); col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
7. Print this pattern
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - (row - 1); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
8. Print this pattern
   5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// m-2
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 6 - row; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}