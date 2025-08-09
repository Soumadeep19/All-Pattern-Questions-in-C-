/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <bits/stdc++.h>
using namespace std;

void print6(int b)
{
    for (int i = b; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a, b;
    cout << "Enter the number of divisions and then no of rows for those n divisions " << endl;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        print6(b);
    }
}