// 0
// 10
// 010
// 1010
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;
    int start;
    for(int i=0;i<n;i++){
       if(i%2 == 0){
        start = 1;
       }
       else{
        start = 0;
       }
       for(int j=0;j<i;j++){
        cout<<start;
        start = 1-start;
       }
        cout<<endl;
    }
    return 0;
}