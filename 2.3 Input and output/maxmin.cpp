#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<"Both number are equal";
    } 
    else{
        if(a>b){
            cout<<"Greater number is "<<a;
        } else{
            cout<<"Greater number is "<<b;
        }
    }
}