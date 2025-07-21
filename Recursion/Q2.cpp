#include<iostream>
using namespace std;

void reversenum(int i,int n){
    if(i<1){
        return ;
    }
    cout<<i<<endl;
    reversenum(i-1,n);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    reversenum(n,n);
    return 0;
}