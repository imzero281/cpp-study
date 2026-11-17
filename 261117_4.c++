#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() { // 가상 함수 선언. 파생 클래스에서 재정의할 함수에 대한 인터페이스 역할
		cout << "shape" << endl;
	} 
};

class Circle : public Shape {
public:
	virtual void draw() {
		//Circle을 그린다.
		cout << "circle" << endl;
	}
};

class Rect : public Shape {
public:
	virtual void draw() {
		//rectangle을 그린다.
		cout << "rectangle" << endl; //오버라이딩, 다형성 실현
	}
};

class Line : public Shape {
public:
	virtual void draw() {
		//line을 그린다.
		cout << "line" << endl;
	}
};

void paint(Shape *p) {
	p->draw(); //p가 가르키는 
}


int main() {

	Shape os;
	os.draw();
	Circle oc;
	oc.draw();

	paint(new Circle);
	paint(new Rect);
	paint(new Line);
	paint(&oc);

	return 0;
}
