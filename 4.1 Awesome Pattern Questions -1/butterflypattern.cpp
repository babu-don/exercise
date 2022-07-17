#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int i;
    for( i=1; i<=a; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space= 2*a-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for( i=a; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space= 2*a-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}