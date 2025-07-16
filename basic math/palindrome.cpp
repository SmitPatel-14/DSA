#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int revnum = 0;
    int k = n;
    while(k>0){  
       int lastdigit = k%10;
       revnum = (revnum*10) + lastdigit;
       k = k/10;
    }
   if(revnum==n) cout<<"true";
   else cout<<"false";
    return 0;
}
