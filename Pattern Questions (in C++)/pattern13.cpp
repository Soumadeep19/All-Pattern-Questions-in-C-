/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <iostream>
using namespace std;

void print13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
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
        print13(n);
    }
}
