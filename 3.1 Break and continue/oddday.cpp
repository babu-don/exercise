#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a date";
    cin>>n;
if(n>30){
    cout<<"Enter a valid date "<<endl;
}
else if(n%2==0){
    cout<<"You can not go outside "<<endl;
} else {
    cout<<"You can go outside "<<endl;
}
    return 0;
}