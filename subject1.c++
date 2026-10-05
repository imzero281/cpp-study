/*1) 두 정수의 합을 함수를 사용해서 구하는 프로그램을 작성하시오.
2) 두 정수의 곱을 함수를 사용해서 구하는 프로그램을 작성하시오.
3) 두 정수의 뺄셈을 함수를 사용해서 구하는 프로그램을 작성하시오.
4) 두 정수의 나눗셈을 함수를 사용해서 구하는 프로그램을 작성하시오.
5) 두 정수의 나머지 연산결과를 함수를 사용해서 구하는 프로그램을 작성하시오.
6) 세 정수의 평균을 함수를 사용해서 구하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

int sum(int x, int y) {
	int sumF = x + y;
	return sumF;
}

int mul(int x, int y) {
	int mulF = x * y;
	return mulF;
}

int sub(int x, int y) {
	int subF = x - y;
	return subF;
}

double divi(int x, int y) {
	double diviF = (double) x / y;
	return diviF;
}

int rem(int x, int y) {
	int remF = x % y;
	return remF;
}

double ave(int x, int y, int z) {
	double aveF = (x + y + z) / 3;
	return aveF;
}

int main(void) {

	int a = 300;
	int b = 200;
	int c = 100;

	int sumFF = sum(a, b);
	cout << "a " << a << ", b " << b << "의 합 " << sumFF << endl;

	int mulFF = mul(a, b);
	cout << "a " << a << ", b " << b << "의 곱 " << mulFF << endl;

	int subFF = sub(a, b);
	cout << "a " << a << ", b " << b << "의 차 " << subFF << endl;

	double diviFF = divi(a, b);
	cout << "a " << a << ", b " << b << "의 몫 " << diviFF << endl;

	int remFF = rem(a, b);
	cout << "a " << a << ", b " << b << "의 나머지 " << remFF << endl;

	double aveFF = ave(a, b, c);
	cout << "a " << a << ", b " << b << ", c " << c << "의 평균 " << aveFF << endl;

	return 0;
}
