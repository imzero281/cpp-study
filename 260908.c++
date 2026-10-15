#include <iostream>
using namespace std;
int main() {

	// 정수 입력받고 홀짝 구분해서 출력
	int num;
	cout << "정수를 입력하시오: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "정수 " << num << "은/는 짝수입니다." << endl << endl;
	}
	else {
		cout << "정수 " << num << "은/는 홀수입니다." << endl << endl;
	}

	// 두 정수 입력받고 두 정수의 합, 곱과 합과 곱이 짝수인지 출력
	int a, b;
	cout << "정수 a의 값을 입력하세요: ";
	cin >> a;

	cout << "정수 b의 값을 입력하세요: ";
	cin >> b;

	cout << endl;

	int sum = a + b;

	cout << a << "+" << b << "=" << sum << endl;

	if (sum % 2 == 0) {
		cout << "두 수의 합은 짝수입니다." << endl << endl;
	}
	else {
		cout << "두 수의 합, " << sum << "은/는 홀수입니다." << endl << endl;
	}

	int mul = a * b;

	cout << a << "*" << b << "=" << mul << endl;

	if (mul % 2 == 0) {
		cout << "두 수의 곱은 " << mul << "은/는 짝수입니다." << endl << endl;
	}
	else {
		cout << "두 수의 곱은 " << mul << "은/는 홀수입니다." << endl << endl;
	}

	//두 정수의 나머지 연산 변수 -> 값 출력
	//두 정수의 나머지 연산이 두 정수의 곱보다 큰지 작은지 출력
	int mod = a % b;
	cout << a << " % " << b << " = " << mod << endl;
	
	//곱과 나머지 결과값 대수 비교
	if (mul > mod) {
		cout << "나머지가 곱 보다 작음" << endl << endl;
	}
	else {
		cout << "나머지가 곱 보다 큼" << endl << endl;
	}

	//두 정수의 곱과 합 중에서 큰 수 출력
	if (sum > mul) {
		cout << "두 수의 곱과 합 중에서 더 큰 결과값= " << sum << endl << endl;
	}
	else {
		cout << "두 수의 곱과 합 중에서 더 큰 결과값= " << mul << endl << endl;
	}

	return 0;
}
