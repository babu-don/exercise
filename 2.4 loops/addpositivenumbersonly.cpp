#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Numbers";
    cin>>n;

    int sum;
    sum = 0;
    while(n>=0){
        sum= sum + n;
        cout<<"Enter number";
        cin>>n;
    }
    cout<<sum;
    return 0;
}