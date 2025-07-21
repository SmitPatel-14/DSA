#include<iostream>
using namespace std;

// sum of first n numbers (parameterizes)
void sumoffirstn(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumoffirstn(i-1,sum+i);
}

//sum of first n numbers (functional)
int sumfunctional(int n){
    if(n==0){
        return 0;
    }
    return n + sumfunctional(n-1);
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    sumoffirstn(n,0);
    cout<< sumfunctional(n);
    return 0;
}




