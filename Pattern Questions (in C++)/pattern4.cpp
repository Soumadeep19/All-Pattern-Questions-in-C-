/*

1
22
333
4444

*/

#include<bits/stdc++.h>
using namespace std;

void print4(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}



int main(){
   int a,b;
   cout<<"Enter the no of divisions and then enter no of rows in those divisions ";
   cin>>a;

   for(int i=0;i<a;i++)
   {
    cin>>b;
    print4(b);

   }
}