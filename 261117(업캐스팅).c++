#include <iostream>
using namespace std;

class A {
public:
	int a;
	void prt() {
		a = 0;
		cout << a << endl;
	}
};
class B : public A {
public:
	int b;
	void prt() {
		a = 10; b = 20;
		cout << a << b << endl;
	}
};

class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Derived::f() called" << endl;
	}
};

int main() {
	 
	B ob;
	B* pob = &ob;
	A* poa = pob;
	poa->prt();

	A* poa2 = new B(); //동적 클래스
	poa2-> prt();

  Derived d, * pDer;
  pDer = &d;
  pDer->f(); // Derived::f()호출
  
  Base* pBase;
  pBase = pDer; //업캐스팅
  pBase->f(); //Base::f() 호출

	return 0;
}
