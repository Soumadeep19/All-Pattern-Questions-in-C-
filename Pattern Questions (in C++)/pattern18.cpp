/*

E 
D E
C D E
B C D E
A B C D E


*/


#include <iostream>
using namespace std;

void print18(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++) //  'E'-1 = 'D'  //
        {
            cout << ch << " ";
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
        print18(n);
    }
}
