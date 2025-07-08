// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    char x = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
        x='A';
    }
    return 0;
}