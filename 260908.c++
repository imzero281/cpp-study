#include <iostream>
using namespace std;
int main(){

	int num;
	cout << "정수를 입력하시오: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "정수 " << num << "은/는 짝수입니다." << endl<<endl;
	}else {
		cout << "정수 " << num << "은/는 홀수입니다." << endl<<endl;
	}

	int a, b;
	cout << "정수 a의 값을 입력: ";
	cin >> a;

	cout << "정수 b의 값을 입력: ";
	cin >> b;

	cout << endl;

	//두 정수의 합, 곱 변수
	int sum = a + b;
	int mul = a * b;

	//합 출력 -> 합은 홀/짝수일까
	cout << a << "+" << b << "=" << sum << endl;

	if (sum % 2 == 0) {
		cout << "두 수의 합은 짝수입니다." << endl << endl;
	}else {
		cout << "두 수의 합, "<<sum<<"은 홀수입니다." << endl << endl;
	}
	
	//곱 출력 -> 곱은 홀/짝수일까
	cout << a << "X" << b << "=" << mul << endl;

	if (mul % 2 == 0) {
		cout << "두 수의 곱, " << mul <<"은 짝수입니다." << endl << endl;
	}else {
		cout << "두 수의 곱, "<<mul<<"은 홀수입니다." << endl << endl;
	}

	//두 정수의 나머지 연산이 두 정수의 곱보다 큰지 작은지 출력
	//
	//두 정수의 나머지 연산 변수 -> 값 출력
	int mod = a % b;
	cout << a << " mod " << b << " = " << mod<<endl;
	//
	//곱의 결과값과 대수 비교
	if (mul > mod) {
		cout << "나머지가 곱 보다 작음" << endl << endl;
	}else{
		cout << "나머지가 곱 보다 큼" << endl << endl;
	}

	//두 정수의 곱mul과 두
	// 정수의 합sum 중에서 큰 수 출력
	if (sum > mul) {
		cout << "두 수의 곱과 합 중에서 더 큰 결과값= "<<sum <<endl << endl;
	}
	else {
		cout << "두 수의 곱과 합 중에서 더 큰 결과값= " << mul << endl << endl;
	}

	return 0;
}
