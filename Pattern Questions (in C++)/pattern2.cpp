/*

*
**
***
****


*/

#include <bits/stdc++.h>
using namespace std;

void print2(int b)
{

    for (int i = 1; i <= b; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int a, b;
    cout << "Enter Number of Rows";
    cin >> a;

    for (int k = 0; k < a; k++)
    {
        cin >> b;
        print2(b);
    }
}