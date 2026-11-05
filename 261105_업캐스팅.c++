#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	void set(int xp, int yp) {
		x = xp;
		y = yp;
	}
	void showPoint() {
		cout << "(" << x << ", " << y <<")" << endl;
	}

};

class ColorPoint :public Point {
	string color;
public:
	void setColor(string s) {
		color = s;

	}
	void showColorPoint() {
		cout << "color point = " << color << endl;
	}
};

int main() {

	ColorPoint cp;

	ColorPoint* pDer = &cp;

	Point* pBase = pDer; //업캐스팅

	pDer->set(3, 4);//(*pDer).set(3,4)와 같음
	pBase->showPoint();
	pDer->setColor("Blue");
	pDer->showColorPoint();

	return 0;
}
