#include <iostream>
using namespace std;

//2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point {
	int x, y; //한 점 (x, y) 좌표값
public:
	void set(int a, int b) {
		x = a; y = b;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

//2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint. Point를 상속
class ColorPoint :public Point {
	string color; //점의 색 표현
public:
	void setColor(string c) { 
		color = c; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); //Point의 showPoint() 호출
}

int main() {
	Point P; //기본 클래스의 객체 생성
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();


	return 0;
}
