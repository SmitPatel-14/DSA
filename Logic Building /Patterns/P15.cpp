// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    char x = 'A';
    for(int i=n;i>0;i--){
        for(int j=i;j>=1;j--){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
        x='A';
    }
    return 0;
}