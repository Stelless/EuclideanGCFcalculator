#include <iostream>

using namespace std;

int remainder(int divedend, int divisor) {
	for (int quantity{0}; divedend >= divisor; ++quantity) {
		divedend += -divisor;
	}
	return divedend;
}

int GCF(int num1, int num2) {
	if (num1 < num2) std::swap(num1, num2); // Make sure num1 is the bigger one
	cout << "Num1: " << num1 << " Num2: " << num2 << endl;
	int r = remainder(num1, num2);
	if (r == 0) { cout << "One is a factor of the other" << endl;
	return num2; // the smaller one will always be the factor of the bigger one
	}
	GCF(num2, r);
}

int main() {
	cout << "Enter 2 numbers: " << endl;
	int num1, num2{ 0 };
	cin >> num1;
	cin >> num2;
	cout << "The GCF of " << num1 << " and " << num2 << " is: " << GCF(num1, num2) << endl;

}