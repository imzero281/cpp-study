#include <iostream>
using namespace std;

// 실습 : 세 정수의 합을 함수를 사용해서 구하고 메인에서 출력

int sum(int a, int b, int c) {
	return a + b + c;
}

//클래스 외부함수를 사용해서 멤버 변수 a,b 값 저장
//클래스 외부함수를 사용해서 출력

class E {
public:
	E() {
		a = 0;
		b = 0;
	}
	int a;
	int b;
	
};

void set(E o) { //어떻게 하면.. 200, 300이 출력될까욥..
	o.a = 200;
	o.b = 300;
}

void pr(E oo ) {
	cout << "Class E a = " << oo.a << " b = " << oo.b << endl;
}

int main() {

	int a = 10, b = 20, c = 30;
	cout << "세 정수의 합 = " << sum(a, b, c) << endl;

	E oab;
	set(oab);
	pr(oab);

	return 0;
}
