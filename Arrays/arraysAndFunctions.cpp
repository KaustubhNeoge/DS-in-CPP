#include<iostream>
using namespace std;

void show1(int size, string pets[]) {
	for (int i = 0; i <= size; i++) {
		cout << pets[i] << " " << flush;
	}
}

void show2(int size, string* pets) {
	for (int i = 0; i <= size; i++) {
		cout << pets[i] << " " << flush;
	}
}

void show3(string (&pets)[3]) {
	for (int i = 0; i <= sizeof(pets)/sizeof(string); i++) {
		cout << pets[i] << " " << flush;
	}
}


int main() {
	string pets[] = { "Ginger", "Riyo", "Bruno", "Ivy" };
	int size = sizeof(pets) / sizeof(string);
	cout << "method 1: " << endl;
	show1(size, pets);
	cout << "method 2: " << endl;
	show2(size, pets);
	cout << "method 3: " << endl;
	//show3(pets);
	return 0;
}