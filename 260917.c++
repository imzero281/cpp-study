#include <iostream>
using namespace std;

int main(void) {

	int ar[10];
	
	cout << "배열의 원소 10개를 입력하시오: ";
	for (int i = 0; i < 10; i++) {
		cin >> ar[i];
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << "ar[" << i << "] = " << ar[i] <<" ";
	}

	cout << endl<<endl << "짝수의 개수 출력" << endl;

	int n=0;
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 == 0) {
			n++;
		}
	}
	cout << n;

	cout << endl<<endl << "배열 원소의 합 출력" << endl;
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += ar[i];
	}
	cout << sum;

	cout << endl << "배열 원소 중 가장 큰 수 출력" << endl;
	int max = ar[0];
	for (int i = 0; i < 10; i++) {
		if (max<ar[i]) {
			max = ar[i];
		}
	}
	cout << max;


	return 0;
}
