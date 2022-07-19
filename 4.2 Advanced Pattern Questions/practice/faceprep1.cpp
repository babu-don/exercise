#include <iostream>
using namespace std;
int main()
{
   int n; cin>>n;

   for(int i=0; i<=n-1; i++){
    cout<<"* ";
    for(int j=1; j<=i; j++){

        cout<<j<<" ";
    }
    cout<<"* ";
    cout<<endl;
   }
   for(int i=n-1; i>=0; i--){
    cout<<"* ";
    for(int j=1; j<=i; j++){
        
        cout<<j<<" ";
    }
    cout<<"* ";
    cout<<endl;
   }
   return 0;
}
