/*


****
****
****
****


*/

#include <iostream>
using namespace std;

void print1(int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
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
        //  Enter no of stars  //
        cin >> b;
        print1(b);
    }
}