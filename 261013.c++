//아직 미완료 코드
#include <iostream>
using namespace std;

int add(int a, int b) {
	int hap;
	hap = a + b;
	return hap;
}

class Rect {
public:
	int width;
	int height;
	int area;
	void getArea() {
		area = width * height;
	}
};

int times(int a, int b) {
	int gop;
	gop = a * b;
	return gop;
}

class Circle {
public:
	int radius;
	double area;
	void getArea() {
		area = 3.14 * radius * radius;
	}
};

class Circum1 {
public:
	int n;
	int radius;
	double area;
	double circum;
	void getArea() {
		area = 3.14 * radius * radius;
	}
	void getCircum() {
	circum = 2 * 3.14 * radius;
	}
	void prt() {
		cout << radius << "\t" << area << "\t" << circum << endl;
	}
};

int main(void) {

	int x = 10;
	int y = 20;
	int sum = add(x, y);
	cout << x << " + " << y << " = " << sum << endl;

	Rect ob1;
	ob1.width = 10;
	ob1.height = 20;
	ob1.getArea();
	cout << "가로 \t세로 \t넓이" << endl;
	cout << ob1.width << "\t" << ob1.height << "\t" << ob1.area << endl;

	Rect ob2;
	ob2.width = 30;
	ob2.height = 40;
	ob2.getArea();
	cout << ob2.width << "\t" << ob2.height << "\t" << ob2.area << endl;

	cout << "\n-----원의 넓이 구하기-----\n";

	Circle b1;
	b1.radius = 10;
	b1.getArea();
	cout << "radius = "<< b1.radius<< ", 원의 넓이 = "<< b1.area << endl;
	
	cout << "\n번호\t반지름\t넓이\t원둘레\n";


	return 0;
}

