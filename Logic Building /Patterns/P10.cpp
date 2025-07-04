// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Upper triangle
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Middle line
    for(int j=1; j<=n; j++){
        cout << "*";
    }
    cout << endl;

    // Lower triangle
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
