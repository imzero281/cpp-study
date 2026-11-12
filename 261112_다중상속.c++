#include <iostream>
#include <string>
using namespace std;

class A {
public:
	int a;
};

class B {
public:
	int b;
};

class C :public A, public B{

public:
	int c;
	void show() {
		cout << a << "\t" << b << "\t" << c << "\t" << endl;
}
};

int main() {

	C oc;
	oc.a = 10;
	oc.b = 20;
	oc.c = 30;
	oc.show();

	return 0;
} 
