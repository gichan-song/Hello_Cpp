#include <iostream>

using namespace std;

int main(void) {

	int A = 0;
	int B = 0;

	cin >> A;
	cin >> B;

	cout.precision(10);
	cout << fixed;
	cout << (double)A / B;


	return 0;
}