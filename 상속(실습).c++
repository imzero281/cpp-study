#include <iostream>
using namespace std;

class A {
public:
	int n, x, y, sum;
	double ave;

	void getAtitle() {
		cout << "순서	x	y	합	평균" << endl;
	}

	void prA() {
		sum = x + y;
		ave = (double)sum / 2;
		cout << n << "	" << x << "	" << y << "	" << sum << "	" << ave << endl;
	}
};

class B:public A {
public:
	int a, b;

	void getBtitle() {
		cout << "순서	x	y	a	b	합	평균" << endl;
	}
	void prB() {
		sum = x + y + a + b;
		ave = (double)sum / 4;
		cout << n << "	" << x << "	" << y << "	" << a << "	" << b << "	" << sum << "	" << ave << endl;
	}
};



int main() {
	
	A ob1;
	ob1.n = 1;
	ob1.x = 10;
	ob1.y = 20;
	ob1.getAtitle();
	ob1.prA();

	A ob2;
	ob2.n = 2;
	ob2.x = 20;
	ob2.y = 30;
	ob2.prA();

	cout << endl;

	B obj1;
	obj1.n = 1;
	obj1.x = 10;
	obj1.y = 10;
	obj1.a = 2;
	obj1.b = 90;
	obj1.getBtitle();
	obj1.prB();

	B obj2;
	obj2.n = 2;
	obj2.x = 40;
	obj2.y = 15;
	obj2.a = 67;
	obj2.b = 10;
	obj2.prB();

	B obj3;
	obj3.n = 3;
	obj3.x = 50;
	obj3.y = 70;
	obj3.a = 68;
	obj3.b = 12;
	obj3.prB();
	return 0;
}
