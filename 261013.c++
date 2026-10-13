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

//얘도 미완료
Student {
public:
    int n;
    string name;
    int c_sc;
    int java_sc;
    int sum;
    double ave;
    int rank; 

    void getSum() {
        sum = c_sc + java_sc;
    }

    void getAve() {
        ave = (double)sum / 2;
    }

    void getRank() {

    }
    void prt() {
        cout << n << "\t" << name << "\t" << c_sc << "\t" << java_sc << "\t" << sum << "\t" << ave << "\t" << rank << endl;
    }

    //연산과 출력을 한번에 ok

};

int main(void) {
   
    cout << "번호\t이름\tcs\tjs\t합\t평균\t등수\n";

    Student ob1;
    ob1.n = 1;
    ob1.name = "홍길동";
    ob1.c_sc = 100;
    ob1.java_sc = 100;
    ob1.rank = 1;
    ob1.getSum();
    ob1.getAve();
    ob1.prt();

    Student ob2;
    ob2.n = 2;
    ob2.name = "김길동";
    ob2.c_sc = 100;
    ob2.java_sc = 70;
    ob2.rank = 2;
    ob2.getSum();
    ob2.getAve();
    ob2.prt();

    Student ob3;
    ob3.n = 3;
    ob3.name = "박길동";
    ob3.c_sc = 20;
    ob3.java_sc = 50;
    ob3.rank = 3;
    ob3.getSum();
    ob3.getAve();
    ob3.prt();

    return 0;
}

//생성자

#include <iostream>
using namespace std;

class A {
public:
	int x;
	A() {
		x = 100;
		cout << "기본 생성자 실행됨" << endl;
	}
	A(int a) {
		x = a;
		cout << "매개변수 있는 생성자 실행됨" << endl;
	}
};

int main(void) {
	A ob;
	cout << ob.x << endl;
	A ob1;
	cout << ob1.x << endl;
	A ob2(10);
	cout << ob2.x << endl;

	return 0;
}

class A {
public:
	int x;
	A() {} // 생성자를 구현하려면 빈 기본 생성자라도 넣어야 안전
	A(int a) {
		x = a;
		cout << "매개변수 있는 생성자 실행됨" << endl;
	}
};

int main(void) {
	A ob;
	A ob2(10);
	cout << ob2.x << endl;

	return 0;
}
