#include<iostream>
using namespace std;

int main(void) {

	//나머지 연산이 짝수인지 홀수인지 출력
	int num;

	cout << "정수를 입력하시오: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "입력된 정수 " << num << "은(는) 짝수입니다." << endl << endl;
	}
	else {
		cout << "입력된 정수 " << num << "은(는) 홀수입니다." << endl << endl;
	}

	//두 정수 입력받고 합, 곱 나머지가 짝수 홀수인지 출력
	cout << "첫 번째 정수를 입력하시오: ";
	int x, y, sum;
	cin >> x;
	cout << "두 번째 정수를 입력하시오: ";
	cin >> y;
	cout << endl;

	sum = x + y;
	if (sum % 2 == 0) {
		cout << "두 정수 " << x << ", " << y << "의 합 " << sum << "은 짝수입니다." << endl << endl;
	}
	else {
		cout << "두 정수 " << x << ", " << y << "의 합 " << sum << "은 홀수입니다." << endl << endl;
	}

	int mul;
	mul = x * y;
	if (mul % 2 == 0) {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << "은 짝수입니다." << endl << endl;
	}
	else {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << "은 홀수입니다." << endl << endl;
	}

	//나머지가 곱보다 큰지 작은지 출력
	int rem;
	rem = x % y;
	if (rem > mul) {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << "보다 " << x << "," << y << "의 나머지 " << rem << "이(가) 더 큽니다." << endl << endl;
	}
	else {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << "이(가) " << x << "," << y << "의 나머지 " << rem << "보다 더 큽니다." << endl << endl;
	}

	//두 정수의 합과 곱 중 큰 수 출력
	if (mul > sum) {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << " 과(와) " << "합 " << sum << " 중 큰 수는 " << mul << "입니다." << endl << endl;
	}
	else {
		cout << "두 정수 " << x << ", " << y << "의 곱 " << mul << " 과(와) " << "합 " << sum << "  큰 수는 " << sum << "입니다." << endl << endl;
	}

	return 0;
}

#include<iostream>
using namespace std;

int main(void) {

	int i = 0;
	while (i < 10) {
		cout << "수업 시간에 떠들지 않겠습니다." << endl;
		i++;
		cout << "i= " << i << endl;
	}

	cout << " while문 끝 "<< endl << endl;

	int num1 = 1;
	while (num1 < 101) {
		cout << num1 << endl;
		num1++;
	}
	cout << " 1에서 100까지 출력 끝" << endl;

	int num2 = 1;
	while (num2 < 101) {
		if (num2 % 10 == 0) {
			cout << num2 << endl;
			num2++;
		}
		else {
			cout << num2<<"	";
			num2++;
		}
	}

	cout << endl;

	int num3 = 1;
	while (num3 < 11) {
		cout << num3 << endl;
		num3++;
	}

	cout << endl;

	num3 = 0;
	while (num3 < 10) {
		num3++;
		if (num3 % 2 == 1) {
			cout << num3 << " ";
		}
	}

	cout << endl<<endl;

	int a = 1;
	int sum = 0;

	while (a < 11) {
		sum += a;
		a++;
	}
	cout << "sum = " << sum;

	cout << endl << endl;

	int b = 1;
	int hap = 0;
	while (b < 11) {
		if (b % 2 == 1) {
			hap += b;
		}
		else {

		}
		b++;
	}
	cout << "1~10까지 홀수의 합 "<<hap;


	return 0;
}

#include<iostream>
using namespace std;

int main(void) {

	for (int i = 1; i < 11; i++) {
		cout << "i= " << i << endl;
	}

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
	for (int j = 1; j <=n; j++) {
		cout << "j = "<< j <<endl;
	}
	cout << endl << endl;

	//1에서 10가지 덧셈
	int sum = 0;
	for (int k = 1; k < 11; k++) {
		sum += k;
	}
	cout << sum;

	cout << endl << endl;

	//1~100까지 홀수만 덧셈
	int sum = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
		else {

		}
		cout << sum << endl;
	}

	return 0;
}
