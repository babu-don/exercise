#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    for(int a= 1; a<=row;a++){
        for(int i=1; i<=col; i++){
            if(i==1 || i==col ||  a==1 || a==row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}