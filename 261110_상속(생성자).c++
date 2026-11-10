#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A() {cout << "생성자 A" << endl;}
	A(int x) {
		cout << "매개변수 생성자 A" << endl;
	}
};

class B :public A {
public:
	B() {
		cout << "생성자 B" << endl;
	}
	B(int x) {
		cout << "매개변수 생성자 B" << endl;
	}
};

int main() {
	
	B b(5);
	B bb; //매개변수 없이 호출

	return 0; //c 소멸
}
