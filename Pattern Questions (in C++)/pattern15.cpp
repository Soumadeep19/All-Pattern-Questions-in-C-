/*

ABCDE
ABCD
ABC
AB
A


*/

#include <iostream>
using namespace std;

void print15(int n)
{

    for (int i = n; i >= 1; i--)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
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
        print15(n);
    }
}
