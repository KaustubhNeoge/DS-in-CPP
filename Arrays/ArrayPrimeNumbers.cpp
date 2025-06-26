#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void primeCheck(vector<int> arr) {
    for (int x : arr) {
        if (x <= 1) {
            cout << x << " is not a prime number." << endl;
            continue;
        }

        bool isPrime = true;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << x << " is a prime number." << endl;
        }
        else {
            cout << x << " is not a prime number." << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: " << flush;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter a number: " << flush;
        cin >> arr[i];
    }

    primeCheck(arr);
    return 0;
}
