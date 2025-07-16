#include<iostream>
#include<math.h>
using namespace std;

int brutaproch(int n){
    int count=0;
    for(int i =1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2) cout<<"The number is prime number";
    else cout<<"the number is not a prime number";
    return 0;
}


int optimalaproch(int n){
     int count=0;
    for(int i =1;i<=sqrt(n);i++){
       
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2) cout<<"The number is prime number";
    else cout<<"the number is not a prime number";
    
    return 0;
}


int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    brutaproch(n);
    optimalaproch(n);
    return 0;
}