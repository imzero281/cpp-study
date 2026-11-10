#include <iostream>
using namespace std;

class A {
public:
	int a;
};

class B :public A {
public:
	int b;
};

int main() {
	B ob;
	B* obp = &ob;
	ob.a = 10;
	ob.b = 20;
	obp->a = 10;
	obp->b = 20;

	A* oap = obp; //업캐스팅 파생 클래스 포인터가 기본 클래스 포인터로 치환됨

	(*oap).a = 30; // oap->a=30;
	//(*oap).b=40; // oap->b=40; // 에러
	obp->a = 30;
	obp->b = 40;

	B* obp2;
	obp2 = (B*)oap;
	obp2->a = 50;
	obp2->b = 60;

	return 0;
}
