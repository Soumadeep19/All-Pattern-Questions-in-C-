// combination of equilateral + reversed equilateral triangle //
/*
   *
  ***
 *****
*******
*******
 *****
  ***
   *

*/


#include <iostream>
using namespace std;

void print9(int n)
{
    // For First Half of symmetry.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int L = 0; L < n - i - 1; L++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // For Second Half of Symmetry.
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * n - (2 * i + 1)); k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a, n;
    cout << "Enter the number of divisions and then enter even no of rows for those n divisions\n";
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> n;

        n = n / 2; // divided by 2 bcuz 'n' will be processed in 2 different loops, so it will be balanced out.
        print9(n);
    }
}