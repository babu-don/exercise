#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count1;
    count1=0;

    for(int i=1; i<=n; i++){
        // count1++;
        for(int j=1; j<=i; j++){
        count1++;
        cout<<count1<<" ";}
        cout<<endl;
    }
}