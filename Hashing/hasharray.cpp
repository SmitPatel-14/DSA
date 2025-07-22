#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute (making hash array)
    int hash[15] = {0};  // for values in range 0 to 14
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "How many elements you want to count frequency for? ";
    cin >> q;

    cout << "Enter your queries:" << endl;
    while (q--) {
        int number;
        cin >> number;
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }

    return 0;
}
