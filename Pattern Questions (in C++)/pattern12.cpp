/*

1      1
12    21
123  321
12344321

*/

#include <iostream>
using namespace std;

void print12(int n)
{
    // initial no. of spaces in row 1.
    int spaces = 2 * (n - 1);

    // Outer loop for the number of rows.
    for (int i = 1; i <= n; i++)
    {

        // for printing numbers in each row
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // for printing spaces in each row
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // for printing numbers in each row
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        // As soon as the numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.
        cout << endl;

        // After each iteration nos. increase by 2, thus
        // spaces will decrement by 2.
        spaces -= 2;
    }
}

int main()
{
    int a, n;
    cout << "ENTER THE NO OF DIVISIONS AND THEN ENTER THE NO OF ROWS\n";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        print12(n);
    }
}