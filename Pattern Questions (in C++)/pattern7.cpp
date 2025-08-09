/*equilateral triangle :-
   
         *
       * * *
      * * * * *
    * * * * * * *
    
*/

#include <iostream>
using namespace std;

void print7(int n)
{
    
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
}

int main()
{
    int a, n;
    cout << "Enter the number of divisions and then enter no of rows for those n divisions\n";
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> n;
        print7(n);
    }
}