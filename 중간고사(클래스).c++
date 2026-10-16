#include <iostream>
using namespace std;

//합 함수
int add(int a, int b) {
	int hap;
	hap = a + b;
	return hap;
}

//사각형 넓이 함수
class Rect {
public:
	int width;
	int height;
	int area;
	void getArea() {
		area = width * height;
	}
};

//원넓이 함수
class Circle {
public:
	int radius;
	double area;
	void getArea() {
		area = 3.14 * radius * radius;
	}
};

//원둘레 함수
class Circum1 {
public:
	int n;
	int radius;
	double area;
	double circum;
	
	void prtTitle() {
		cout << "\n번호\t반지름\t넓이\t원둘레\n" << endl;
	}
	void prtCircum() {
		area = 3.14 * radius * radius;
		circum = 2 * 3.14 * radius;
		cout << n<<"\t"<<radius << "\t" << area << "\t" << circum << endl;
	}
};

class Student{
public:
	int n;
	string name;
	int c_sc;
	int java_sc;
	int sum;
	double ave;
	int rank;

	void getRank(Student a, Student b) {
		rank = 1;

		if (a.sum > sum) rank++;
		if (b.sum > sum) rank++;
	}


	void prtStudent() {
		sum = c_sc + java_sc;
		ave = (double)sum / 2;
		cout << n << "\t" << name << "\t" << c_sc << "\t" << java_sc << "\t" << sum << "\t" << ave << "\t" << rank << endl;
	}

	//연산과 출력을 한번에 ok

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
	cout << "radius = " << b1.radius << ", 원의 넓이 = " << b1.area << endl;

	cout << "\n-----원의 둘레 구하기-----\n";
	Circum1 c1;
	c1.n = 1;
	c1.radius = 40;
	c1.prtCircum();
	cout << endl;

	cout << "번호\t이름\tcs\tjs\t합\t평균\t등수\n";

	Student cb1;
	cb1.n = 1;
	cb1.name = "홍길동";
	cb1.c_sc = 100;
	cb1.java_sc = 100;

	Student cb2;
	cb2.n = 2;
	cb2.name = "김길동";
	cb2.c_sc = 100;
	cb2.java_sc = 70;

	Student cb3;
	cb3.n = 3;
	cb3.name = "박길동";
	cb3.c_sc = 20;
	cb3.java_sc = 50;

	cb1.getRank(cb2, cb3);
	cb2.getRank(cb1, cb3);
	cb3.getRank(cb1, cb2);

	cb1.prtStudent();
	cb2.prtStudent();
	cb3.prtStudent();

	return 0;
}

