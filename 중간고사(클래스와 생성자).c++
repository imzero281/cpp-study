/*두 수의 평균 리턴하는 함수 구형
메인에서 호출 2,3의 평균 2.5
클래스{}
int a
int b
기본생성자(위임생성자)
a=0,b=0
매개변수가 있는 생성자 추가
두수 합 구하는 함수
두수 평균 구하는 함수
출력하는 함수*/
#include <iostream>
using namespace std;

double avg(int a, int b) {
	double avgF = (double)(a + b) / 2;
	return avgF;
}

class A {
public:
	int n;
	int a;
	int b;
	int sum;
	double ave;

A() :A(0, 0, 0) {}
A(int num, int x, int y) {
	n = num;
	a = x;
	b = y;
}

void prtTitle() {
	cout<< "번호\ta\tb\tsum\tave" << endl;
}

void getPrt() {
	sum = a + b;
	ave = (double)sum / 2;
	cout << n << "\t" << a << "\t" << b << "\t" << sum << "\t" << ave << "\t" << endl;
}
};

int main(void) {

	//평균구하는 함수 이용해서 호출
	int x = 2;
	int y = 3;
	double ave = avg(x, y);
	cout << x << " 와 " << y << "의 평균 " << ave << endl << endl;

	//클래스와 생성자 이용
	cout << "번호\ta\tb\tsum\tave" << endl;
	A ob1(1, 3, 5); //훨씬 간편하게 사용 가능
	// 클래스 이용해서 타이틀 출력 
	// ob1.prtTitle();
	ob1.getPrt();

	A ob2(2, 1, 9);
	ob2.getPrt();

	return 0;
}
