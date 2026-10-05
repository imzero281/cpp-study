#include <iostream>
using namespace std;

// 합을 리턴하는 함수 
int add(int x, int y) {
	int hap = x + y;
	return hap;
}

// 두 정수 중 큰 수 리턴하는 함수 
int getMax(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

// 두 수의 평균을 리턴하는 함수 
double getAve(int x, int y) {
	double avg = (double) (x+y) / 2;
	return avg;
}

// 세 정수 중 가장 큰 수 리턴하는 함수 
int getTmax(int x, int y, int z) {
	if (x > y) {
		return x;
	}
	else if (y > z) {
		return y;
	}
	else if (x>z) {
		return x;
	}
	else {
		return z;
	}
}

// 두 정수 중 작은 수 리턴하는 함수 
int getMin(int x, int y) {
	if (x > y) {
		return y;
	}
	else {
		return x;
	}
}

// 배열 리턴하는 함수
void prAr(int a[], int n) {
	cout << "배열 원소 출력 함수 실행" << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

// 배열의 합 리턴하는 함수
void hapAr(int a[], int n) {
	cout << "배열 원소의 합 출력 함수 실행" << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum << endl;
}

// 배열 원소 중 홀수만 덧셈하는 함수
void holAr(int a[], int n) {
	cout << "배열의 원소 중 홀수만 더하는 함수 실행" << endl;
	int sumAr = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			sumAr += a[i];
		}
	}
	cout << sumAr << endl;
}

// 배열의 원소 중 가장 큰 수 리턴하는 함수
void getMaxAr(int a[], int n) {
	cout << "배열의 원소 중 가장 큰 수 출력하는 함수 실행" << endl;
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max= a[i];
		}
	}
	cout << max;
}

//두 정수의 곱을 리턴하는 함수
int getMul(int x, int y) {
	cout << "두 정수의 곱 구하는 함수 실행";
	int gop = x * y;
	return gop;
}


int main() {
	// 합을 구하는 함수 호출해서 출력
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << a << " + " << b << " = " << sum << endl;

	// 두 정수 중 큰 수 구하는 함수 호출해서 출력
	int m = getMax(a, b);
	cout << a << " 와 " << b << " 중 큰 수는 " << m << endl;

	// 두 정수의 합 구하는 함수 호출해서 출력
	int q = getAve(a, b);
	cout << a << " 와 " << b << " 의 평균은 " << q << endl;

	// 세 정수 중 큰 수 구하는 함수 호출해서 출력
	int c = 30;
	int t = getTmax(a, b, c);
	cout << a << " , " << b << " , " << c << "중 가장 큰 수는 " << t << " 입니다." << endl;

	// 두 정수 중 작은 수 구하는 함수 호출해서 출력
	int min = getMin(a, b);
	cout << a << " 와 " << b << " 중 작은 수는 " << min << endl;

	//배열 원소 출력
	cout << endl << "배열의 원소 출력" << endl;
	int ar[] = { 7,2,9,45,1};
	for (int i = 0; i < 5; i++) {
		cout << ar[i] << " ";
	}

	//배열 원소의 합 출력
	cout << endl << "배열 원소의 합 출력" << endl;
	sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += ar[i];
	}
	cout << sum << endl;
	
	// 배열 함수 호출해서 출력
	prAr(ar, 5);
	cout << endl << endl;
	
	// 배열의 합 함수 호출해서 출력
	hapAr(ar, 5);
	cout << endl << endl;

	// 배열의 원소 중 홀수만 더하는 함수 호출해서 출력
	holAr(ar, 5);
	cout << endl << endl;

	// 배열의 원소 중 가장 큰 수 출력하는 함수 호출해서 출력
	getMaxAr(ar, 5);
	cout << endl << endl;

	// 두 정수의 곱 출력
	int mul = getMul(a, b);
	cout << a << " * " << b << " = " << mul << endl;

	return 0;
}
