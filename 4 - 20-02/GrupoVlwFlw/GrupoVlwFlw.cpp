#include <iostream>
using namespace std;

void main() {
	
	int r, x = 2, num = 0;

	r = x;

	do {

		num = num + 1;

		r = r + (r * 2);

		num = num + 1;

	} while (num <= 8);

	cout << r;

	system("pause>null");

}