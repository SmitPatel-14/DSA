#include<iostream>
using namespace std;

void printname(int i,int n){
    if(i>n){
        return;
    }
    cout<<"smit"<<endl;
    printname(i+1,n);
}

int main(){
    int n;
    cin>>n;
    printname(1,n);
    cout<<n;
    return 0;
}