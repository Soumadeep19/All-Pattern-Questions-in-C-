/*


4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/

#include <iostream>
using namespace std;

void print22(int n)
{
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            // for calculating the minimum distance
            int minDist = min(min(top, bottom), min(right, left));

            // for printing the prev/actual value of matrix :- //
            cout << (n - minDist);
        }
        cout << endl;
    }
}

int main()
{
    int a, n;
    cout << "ENTER THE NUMBER OF DIVISIONS AND THEN ENTER THE BORDERLINE VALUE OF THAT DIVISION MATRIX \n";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        print22(n);
    }
}