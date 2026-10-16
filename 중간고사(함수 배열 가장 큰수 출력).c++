#include <iostream>
using namespace std;

int getMax(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n;i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << max << endl;
	return max;
}

int main(void) {

	int ar[5];
	cout << "크기가 5인 배열의 원소를 입력하세요" << endl;
	
	for (int i = 0;i < 5;i++) {
		cin >> ar[i];
	}

	cout << "배열의 원소 중 가장 큰 수 = ";
	getMax(ar, 5);
	return 0;
}
