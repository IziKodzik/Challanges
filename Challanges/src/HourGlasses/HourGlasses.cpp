#include <iostream>
using namespace std;

int hourglasses() {
	int arr[6][6] = {
		{-9, -9, -9,  1, 1, 1},
		{0, -9,  0,  4, 3, 2 },
		{-9, -9, -9,  1, 2, 3},
		{0,  0,  8,  6, 6, 0 },
		{0,  0,  0, -2, 0, 0},
		{0,  0,  1,  2, 4, 0 }
	};
	int* greatest = nullptr;
	for (int op = 1; op < 5; ++op) {
		for (int po = 1; po < 5; ++po) {
			int sum = 0;

			sum += arr[op - 1][po - 1];
			sum += arr[op - 1][po];
			sum += arr[op - 1][po + 1];
			sum += arr[op][po];
			sum += arr[op + 1][po - 1];
			sum += arr[op + 1][po];
			sum += arr[op + 1][po + 1];
			if (greatest == nullptr) {
				greatest = new int;
				*greatest = sum;
			}
			else if (sum > * greatest)
				*greatest = sum;
		}
	}
	if (greatest == nullptr) {
		cout << "Bad input.";
		return -69;
	}
	cout << *greatest;
	return *greatest;

}