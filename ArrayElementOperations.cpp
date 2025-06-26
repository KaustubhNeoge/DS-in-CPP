#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int Sum(vector<int> arr) {
	int s = 0;
	for(int x : arr){
		s += x;
	}
	return s;
}

int Min(vector <int> arr) {
	int min = 0;
	for (int x : arr) {
		if (x < min) {
			min = x;
		}
	}
	return min;
}

int Max(vector <int> arr) {
	int max = 0;
	for (int x : arr) {
		if (x > max) {
			max = x;
		}
	}
	return max;
}

int countEven(vector <int> arr) {
	int even = 0;
	for (int x : arr) {
		if (x % 2 == 0) {
			even++;
		}
	}
	return even;
}

int countOdd(vector <int> arr) {
	int odd = 0;
	for (int x : arr) {
		if (x % 2 == 1) {
			odd++;
		}
	}
	return odd;
}



int main() {
	int i, n = 0;
	cout << "Enter the number of elements in the array: " << flush;
	cin >> n;
	vector<int> arr(n);

	for (i = 0; i < n; i++) {
		cout << "Enter a number: " << flush;
		cin >> arr[i];
	}
	cout << "The elements in the array are: " << endl;
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;

	int sum = Sum(arr);
	cout << "The sum of the elements in the array is: " << sum << endl;

	int min = Min(arr);
	int max = Max(arr);
	cout << "The smallest number in the array is: " << min << endl;
	cout << "The largest number in the array is: " << max << endl;
	int evenCount = countEven(arr);
	int oddCount = countOdd(arr);
	cout << "The count of even numbers in the array is: " << evenCount << endl;
	cout << "The count of odd numbers in the array is: " << oddCount << endl;

	return 0;
}