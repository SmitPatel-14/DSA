#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}