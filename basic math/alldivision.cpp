#include<iostream>
#include<math.h>
using namespace std;

int brutaproch(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}


int optimalaproch(int n){
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i) cout<<(n/i)<<" ";
        }
    }
    return 0;
}


int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    // brutaproch(n);
    optimalaproch(n);
    return 0;
}