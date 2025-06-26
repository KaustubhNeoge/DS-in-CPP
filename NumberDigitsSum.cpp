#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter a number: ";
	cin >> n;
	int sum = 0;
	int temp = n;
	while (temp != 0) {
		sum += temp % 10;
		temp /= 10;
	}

	cout << "Sum of digits of " << n << " is: " << sum << endl;
}