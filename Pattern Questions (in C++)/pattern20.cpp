/*



*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *



*/

#include <iostream>
using namespace std;

void print20(int n)
{

    // loop running //
    for (int i = n; i > 0; i--)
    {

        // stars//
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        // spaces//
        for (int k = 1; k <= ((2 * i) - 2); k++)
        {
            cout << " ";
        }

        // stars//
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // stars/
        for (int j = i; j < n - 1; j++)
        {
            cout << "*";
        }

        // spaces//
        for (int k = 0; k <= (2 * i) + 1; k++)
        {
            cout << " ";
        }

        // stars//
        for (int j = i; j < n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int a, n;
    cout << "ENTER THE NUMBER OF DIVISIONS AND THEN ENTER NO OF ROWS\n";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        print20(n);
    }
}