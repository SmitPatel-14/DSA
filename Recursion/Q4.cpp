// factorial

#include<iostream>
using namespace std;

int factorialofn(int n){
    if(n==1){
        return 1;
    }
    return n * factorialofn(n-1);
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<factorialofn(n);
    return 0;
}

// TC --> O(n)
// SC --. O(n)