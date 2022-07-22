#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n; cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int extraCandies; cin>>extraCandies;
    for(int b=0; b<n; b++){
        int temp= array[b] + extraCandies;
        bool chance = true;
        for(int c=0; c<n; c++){
          
            if(temp<array[c]){
                chance = false;
                cout<<"false"<<endl;
                break;
            }
        } 
        if(chance)
            cout<<"true"<<endl;
    }
    return 0;
}
