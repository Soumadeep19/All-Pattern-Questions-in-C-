// Reverse equilateral triangle //
/*


*********
 ******* 
  *****  
   ***   
    *    

*/

#include<iostream>
using namespace std;

void print8(int n)
{
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<i;j++)
        {cout<<" ";}           //for spaces
        for(int k=0;k<(2*n-(2*i+1));k++) 
        {cout<<"*";}          //for stars
        for(int j=0;j<i;j++)
        {cout<<" ";}          //for spaces
        cout<<endl;

    }
    
}

int main()
{
    int a,n;
    cout<<"Enter the number of divisions and then enter the no of rows of each divisions\n";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        print8(n);
    }
}