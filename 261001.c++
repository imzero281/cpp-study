#include <iostream>
using namespace std;

void prAr(int a[3][5], int num1, int num2) {
	cout << "함수 이용해서 2차원 배열 호출하기" << endl;
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			cout << a[i][j] << "	";
		}
		cout << endl;
	}
}

void prtAr(int a[3][5], int n1, int n2) {
	cout << "함수 이용해서 2차원 배열 행별 합 출력하기" << endl;
	int hap = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			hap += a[i][j];
		}
		cout << endl;
	}
}



int main() {

	int ar[3][5] = { {0,1,2,3,4},
					{10,11,12,13,14},
					{20,21,22,23,24} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ar[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl;

	prAr(ar, 3, 5);

	cout << endl;

	// 행별 합 구하기
	
	for(int i=0;i<5;i++){
		cout << ar[0][i]<<"	";
	}
	cout << endl<<"1행의 합 = ";
	
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += ar[0][i];
	}
	cout << sum << endl;

	int sum1 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			sum1 += ar[0][j];
		}
	}
	cout << sum1 << endl;

	prtAr(ar, 3, 5);
	
	return 0;
}


#include <iostream>
using namespace std;

struct A {
	string name;
	int c_sc;
	int math_sc;
	void prt() {
		cout << name << " " << c_sc << " " << math_sc << endl;
	}
};


int main() {

	A st1;
	st1.name = "이찬미";
	st1.c_sc = 100;
	st1.math_sc = 100;

	cout << st1.name << endl;
	st1.prt();

	A st2;
	st2.name = "민윤희";
	st2.c_sc = 100;
	st2.math_sc = 100;

	cout << st2.name << endl;
	cout << st2.c_sc << endl;
	cout << st2.math_sc << endl;

	return 0;
}
