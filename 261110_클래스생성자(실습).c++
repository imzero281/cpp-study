#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A() {
		cout << "생성자 A" << endl;
	}
	~A() {
		cout << "소멸자 A" << endl;
	}
};

class B :public A {
public:
	B() {
		cout << "생성자 B" << endl;
	}
	~B() {
		cout << "소멸자 B" << endl;
	}
};

class C :public B {
public:
	C() {
		cout << "생성자 C" << endl;
	}
	~C() {
		cout << "소멸자 C" << endl;
	}
};

int main() {
	
	C c; // c 생성 //C()호출

	return 0; //c 소멸
}
