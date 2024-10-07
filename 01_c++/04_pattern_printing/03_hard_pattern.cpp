/* 1. Print this pattern
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
2. Print this pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout << "Enter the no: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= (n - row); col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
3. Print this pattern
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
  int row, column, n;
  cout << "Enter the value of n: ";
  cin >> n;
  for (row = 1; row <= n; row++)
  {
    for (column = 1; column <= n - row; column++)
    {
      cout << "  ";
    }
    for (column = 1; column <= row; column++)
    {
      cout << column << " ";
    }
    for (column = row - 1; column >= 1; column--)
    {
      cout << column << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
4. Print this pattern
  * * * * * * * * * * * * * * * * *
  * * * * * * * * * * * * * * *
    * * * * * * * * * * * * *
      * * * * * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
*/
#include <iostream>
using namespace std;
int main()
{
  int row, col, n;
  cout << "Enter the value of n: ";
  cin >> n;
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= n - row; col++)
    {
      cout << "  ";
    }
    for (col = 1; col <= 2 * row - 1; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}

/*
5. Print this pattern
* * * * * * *
* *       * *
*   *   *   *
*     *     *
*   *   *   *
* *       * *
* * * * * * *
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows/columns: ";
  cin >> n;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
    {
      if (row == 1 || row == n || col == 1 || col == n || row == col || row + col == n + 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}

/*
6. Print this pattern
* * * * * *           * * * * * *
* * * * *           * * * * *
* * * *           * * * *
* * *           * * *
* *           * *
*           *

*/
#include <iostream>
using namespace std;
int main()
{
  int row, col, n;
  cout << "Enter the input: ";
  cin >> n;
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    for (col = 1; col <= 2 * n - 2; col++)
    {
      cout << " ";
    }
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}

/*  other patterns 
7.
* * * * * * * * 
* * *     * * * 
* *         * *
*             * 
*             * 
* *         * *
* * *     * * * 
* * * * * * * *

8. 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 

*/
