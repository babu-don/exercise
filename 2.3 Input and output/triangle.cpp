#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three sides of triangle"<<endl;
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout<<"Triangle is equilateral";
    }
    else if(a==b || b==c || c==a){
        cout<<"Triangle is isosceles"<<endl;
    } else {
        cout<<"Triangle is scalene";
    }
    return 0 ;
}