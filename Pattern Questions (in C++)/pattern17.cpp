/*

    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA



*/


#include <iostream>
using namespace std;

void print17(int n)
{
    // Outer loop for the number of rows.
    for (int i = 0; i < n; i++)
    {

        // for printing the spaces.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // for printing the characters.
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // for printing the spaces again after characters.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // As soon as the letters for each iteration are printed, we move to the
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
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
        print17(n);
    }
}
