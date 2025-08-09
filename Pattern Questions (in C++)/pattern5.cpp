/* 

*****
****
***
**
*

*/

#include<iostream>
using namespace std;

void print5(int b)
{
    for(int i=b;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}


int main(){
    int a,b;
    cout<<"Enter the number of divisions and then enter the no of rows";
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cin>>b;
        print5(b);
    }
}