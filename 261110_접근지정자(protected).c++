#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; //한 점 (x, y) 좌표값
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}
void Point::showPoint(){
	cout << "(" << x << "," << y << ")" << endl;
}
class ColorPoint :public Point {
	string color;

public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::showColorPoint() { 
	cout << color << ":";
	showPoint(); // Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else
		return false;
}

// 실습 2
class P {
public:
	int a;
private:
	int b;
protected:
	int c;

public:
	void setP(int aF, int bF, int cF) {
		a = aF;
		b = bF;
		c = cF;
	}

	void getP() {
		cout << "a = " << a << " b = " << b << " c = " << c<<endl;
	}

};

class C :public P {
public:
	int x;
private:
	int y;
protected:
	int z;

public:
	void setC(int xF, int yF, int zF) {
		x = xF;
		y = yF;
		z = zF;
	}
	void getC() {
		getP();
		cout << "x = " << x << " y = " << y << " z = " << z << endl;
	}
};

int main() {
	Point p; //기본 클래스의 객체 생성
	p.set(2, 3);
	//p.x = 5; 오류
	//p.y = 5; 오류
	p.showPoint();

	ColorPoint cp; //파생 클래스의 객체 생성
	//cp.x = 10; 오류
	//cp.y=10; 오류
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "ture" : "flase")<<endl;

	cout << endl << "실습 2" << endl;
	P ob1;
	ob1.setP(10, 20, 30);
	ob1.getP();

	C obj1;
	obj1.setP(40, 50, 60);
	obj1.setC(70, 80, 90);
	obj1.getC();

	return 0;
}
