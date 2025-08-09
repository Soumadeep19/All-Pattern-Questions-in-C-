/* 

1
12
123
1234

*/

#include <iostream>
using namespace std;

void print3(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
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
    print3(b);

   }
}