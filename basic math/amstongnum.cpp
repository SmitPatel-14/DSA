#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the number: ";
cin>>n;
int k = n;
int sum = 0;

while(k>0){
    int ld = k%10;
    sum = sum + (ld*ld*ld);
    k=k/10;
}
if(sum==n) cout<<"it is an amtrong number";
else cout<<"not an amstong number";
return 0;
}