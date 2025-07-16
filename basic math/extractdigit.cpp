#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the number: ";
cin>>n;
int count;

while(n>0){
    int lastdigit = n%10;
    cout<<lastdigit<<endl;
    count ++;
    n=n/10;
}
return 0;
}