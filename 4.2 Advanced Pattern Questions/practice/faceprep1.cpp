#include <iostream>
using namespace std;
int main()
{
   int n; cin>>n;

   for(int i=0; i < n; i++){
    cout<<"* ";
    for(int j=1; j<=i; j++){

        cout<<j<<" ";
        if(j == i)
            cout<<"*";

    }
    cout<<endl;
   }
   for(int i=n-2; i>=0; i--){
    cout<<"* ";
    for(int j=1; j<=i; j++){
        
        cout<<j<<" ";
        if(i==j)
            cout<<"* ";
    }
    
    cout<<endl;
   }
   return 0;
}
