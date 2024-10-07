// pattern printing problems - Easy
/*
1. print this pattern
   * * * * *
   * * * * *
   * * * * *
   * * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
2. print this pattern
   1 1 1 1 1
   2 2 2 2 2
   3 3 3 3 3
   4 4 4 4 4
   5 5 5 5 5
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
3. Print this pattern
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
4. Print this pattern
   5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
5. Print this pattern
   1 4 9 16 25
   1 4 9 16 25
   1 4 9 16 25
   1 4 9 16 25
   1 4 9 16 25
*/
#include <iostream>
using namespace std;
int main() {
   for(int i = 1 ; i<= 5 ; i++){
    for(int j =1 ; j<=5 ; j++){
        cout<<j*j<<" ";
    }
    cout<<endl;
   }
    return 0;
}

/*
6. Print this problem
   a a a a a
   b b b b b
   c c c c c
   d d d d d
   e e e e e
*/
#include <iostream>
using namespace std;
int main()
{
    for (char i = 'a'; i <= 'e'; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
7. Print this pattern
   a b c d e
   a b c d e
   a b c d e
   a b c d e
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (char j = 'a'; j <= 'd'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
8. Print this pattern
   1  2  3  4  5
   6  7  8  9  10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25
*/
#include <iostream>
using namespace std;
int main()
{
   for (int i = 1; i <= 25; i = i + 5)
   {
      for (int j = i; j <= (i + 4); j++)
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
   int count = 1;
   for (int i = 1; i <= 5; i++)
   {
      for (int j = 1; j <= 5; j++)
      {
         cout << count << " ";
         count++;
      }
      cout << endl;
   }
   return 0;
}
