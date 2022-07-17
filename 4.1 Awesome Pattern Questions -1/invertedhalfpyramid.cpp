#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        for(int a=1; a<=i; a++){
            
                cout<<"*";
        
           
        }
        cout<<endl;
    }
}