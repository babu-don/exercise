#include<iostream>
using namespace std;

int main()
{
   float n1,n2;
    cin>>n1>>n2;
    char button;
        cout<<"enter which operation you want to use";
        cin>>button;
        switch (button)
        {
        case  '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case  '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        
        default:
        cout<<"operation not found";
            break;
        }
}