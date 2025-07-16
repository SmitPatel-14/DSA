#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int revnum = 0;
    while(n>0){
       int lastdigit = n%10;
       revnum = (revnum*10) + lastdigit;
       n = n/10;
    }
    cout<<"reverse number is:"<<revnum;
    return 0;
}
