//매개변수를 가진 파생 클래스의 생성자는 기본 클래스의 기본 생성자를 선택함
//파생 클래스의 매개 변수를 가진 생성자가 기본 클래스의 기본 생성자 호출

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
	B() { //A() 호출하도록 컴파일됨
		cout << "생성자 B" << endl;
	}
	B(int x) { //A() 호출하도록 컴파일됨
		cout << "매개변수 생성자 B" << endl;
	}
};

int main() {
	B b(5);

	return 0;
}
