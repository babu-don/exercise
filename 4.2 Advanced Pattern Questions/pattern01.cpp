#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int count=0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i;j++){
        int even= i+j;
        if(even%2==0){
            cout<<"1";
        } else{
            cout<<"0";
        }
        }
        cout<<endl;
    }
    
    
    return 0;
}