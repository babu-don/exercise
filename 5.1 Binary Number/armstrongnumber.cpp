#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int n; cin>>n;
    int sum= 1;
    int originaln=n;
    while(n>0){
        int lastdigit= n%10;
        sum += pow(lastdigit,3);
        n=n/10; 
    }
    cout<<sum;
    if(sum==originaln){
        cout<<" is a Armstrong Number"<<endl;
    } else{
        cout<< " is not a Armstrong Number"<<endl;
    }
    return 0;
    
}
