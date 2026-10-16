#include<iostream>
using namespace std;

int main(void) {

	for (int i = 1; i < 11; i++) {
		cout << "i = " << i << "	";
	}
	
	cout << endl << endl;

	cout << "1~100까지 10단위로 출력하기" << endl;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 0) {
			cout << i << "	" << endl;

		}
		else {
			cout << i << "	";
		}
	}
	cout << endl << endl;

	
	cout << "정수를 입력하시오: ";
	int n;
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		cout << "i = " << i << "	";
	}
	cout << endl << endl;

	cout << "1~10까지의 합" << endl;
	int sum = 0;
	for (int k = 1; k < 11; k++) {
		sum += k;
	}
	cout << sum;

	cout << endl << endl;

	cout << "1~100까지 홀수의 합" << endl;
	sum = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	cout << sum << endl;

	return 0;
}
