#include <iostream>
using namespace std;

bool isPrime(int c){
    for(int j=2; j<c; j++){
        if(c%j==0){
            return false;
        }
    }
    return true;
}

int main()
{
  int a,b;
  cin>>a>>b;

  for(int n=a; n<=b; n++){
    if(isPrime(n)){
        cout<<n<<endl;
    }
  }
}
