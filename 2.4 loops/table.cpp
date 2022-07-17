#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;

    for(int number=1; number<=10; number++){
        int sum= a*number;
        cout<<sum<<endl;
    }
    return 0 ;
}