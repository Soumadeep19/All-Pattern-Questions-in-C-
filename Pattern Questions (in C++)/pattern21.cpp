/*
*****
*   *
*   *
*   *
*****

*/

#include <iostream>
using namespace std;

void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
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
        print21(n);
    }
}