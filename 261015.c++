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

double avg(int x, int y) {
	double avgF = (double) (x + y) / 2;
	return avgF;
}

class A {
public:
	int n;
	int a;
	int b;
	int sum;
	double ave;
	
	/* A():A(0,0){}
	A(int x, int y) {
		a = x;
		b = y;
		cout << "x = " << x << ", y= " << y << endl; // 이 상황엔 맞지 않아요.... 어떻게 맞게 해야할까요.... 수정한 건 맞을까요....
	}*/

	A():A(0,0,0){}
	A(int num, int x, int y){
		n=num;
		a=x;
		b=y;
	}

	void getPrt() {
	sum = a + b;
	ave = (double)sum / 2;
	cout << n << "\t" << a << "\t" << b << "\t" << sum << "\t" << ave << "\t" << endl;
	}
};

int main(void) {

	int a = 2;
	int b = 3;
	double ave = avg (a, b);
	cout << a << " 와 " << b << "의 평균 " << ave << endl;

	cout << "번호\ta\tb\t" << "sum\t" << "ave" << endl;
	A ob1(1, 3, 5); //훨씬 간편하게 사용 가능
	ob1.getPrt();
	
	/*A ob1;
	ob1.n = 1;
	ob1.a = 5;
	ob1.b = 10;
	ob1.getPrt();

	A ob2;
	ob2.n = 2;
	ob2.a = 10;
	ob2.b = 15;
	ob2.getPrt();

	A ob3;
	ob3.n = 3;
	ob3.a = 7;
	ob3.b = 1;
	ob3.getPrt();
	*/

	return 0;
}
