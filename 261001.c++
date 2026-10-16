#include <iostream>
using namespace std;

void prtAr(int a[3][5], int num1, int num2) {
	cout << "함수 이용해서 2차원 배열 호출하기" << endl;
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			cout << a[i][j] << "	";
		}
		cout << endl;
	}
}

void prtArr(int a[3][5], int n1, int n2) {
	cout << "함수 이용해서 2차원 배열 행별 합 출력하기" << endl;
	for (int i = 0; i < n1; i++) {
		int hap = 0;
		for (int j = 0; j < n2; j++) {
			hap += a[i][j];
		}
		cout << hap << endl;
	}
}


int main() {

	cout << "함수 사용하지 않고 배열 출력\n";
	int ar[3][5] = { { 0,1,2,3,4 },
					{ 10,11,12,13,14 },
					{ 20,21,22,23,24 } };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ar[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl;

	prtAr(ar, 3, 5);

	cout << endl << endl;

	// 행별 합 구하기

	cout << "1행 출력하기" << endl;
	for (int i = 0;i < 5;i++) {
		cout << ar[0][i] << "	";
	}
	
	cout << endl << "1행의 합 = ";
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += ar[0][i];
	}
	cout << sum << endl << endl;

	cout << "함수 사용하지 않고 2차원 배열의 행별 합 구하기" << endl;

	for (int i = 0; i < 3; i++) {
		int sum1 = 0;
		for (int j = 0; j < 5; j++) {
			sum1 += ar[i][j];
		}
		cout << sum1 << endl;
	}
	cout << endl;

	prtArr(ar, 3, 5);

	return 0;
}
