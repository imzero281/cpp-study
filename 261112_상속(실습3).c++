#include <iostream>
#include <string>
using namespace std;

class D {
private:
	int a;
protected:
	int b;
public:
	void setA(int x) {
		a = x;
	}
	void setB(int y) {
		b = y;
	}
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	void show() {
		cout << "a = " << a << "b = " << b << endl;
	}
};

class E :public D {
private:
	int c;
public:
	void setBC(int x, int y) {
		c = x;
		b = y;
	}
	int getC() {
		return c;
	}
	void show() {
		cout << "a = " << getA() << " b = " << b << " c = " << c << endl;
	}
};


int main() {

	E oe;
	oe.setA(10);
	oe.setBC(10, 20);

	oe.show();

	return 0;
} 
