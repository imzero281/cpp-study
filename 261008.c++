#include <iostream>
using namespace std;

class B {
public:
    string name;
    int a;
    int b;
    void prt() {
        cout << name << " " << a << " " << b << endl;
    }
};

/* 실습: 클래스 멤버변수 : 이름, 학번, 과목1, 과목2, 합, 평균
                멤버함수 : 이름, 학번, 과목1, 과목2, 합, 평균 출력 함수
개체 4개 생성*/

class A {
public:
    string n;
    string name;
    string sub1;
    string sub2;
    string hap;
    string avg;

    int sub_1;
    int sub_2;
    int sum = 0;
    double ave = 0;

    void prtTitle() {
        cout << "번호\t이름\t과목1\t과목2\t합\t평균" << endl;
    }

    void prt() {
        sum = sub_1 + sub_2;
        ave = (double)sum / 2;
        cout <<n<<"\t"<< name << "\t" << sub_1 << "\t" << sub_2 << "\t" << sum << "\t" << ave << endl;
    }
};


/* 실습2 : 사각형 클래스
           class Rect{
                int garo;
                int sero;
                int area;
                함수 넓이 계산 함수
                출력 함수
            };           */

class Rect {
public:
    int n;
    int weidth;
    int height;
    int area;

    void getArea() {
        area = weidth * height;
    }

    void prt() {
        cout << n << "\t" << weidth << "\t" << height << "\t" << area << endl;
    }
};


int main(void) {
    B ob1;
    ob1.name = "이길동";
    ob1.a = 10;
    ob1.b = 20;
    ob1.prt();

    B ob2;
    ob2.name = "박길동";
    ob2.a = 30;
    ob2.b = 50;
    ob2.prt();

    A cl1;
    cl1.prtTitle();
    cl1.n = "1";
    cl1.name = "이길동";
    cl1.sub1 = "수학";
    cl1.sub2 = "과학";
    cl1.hap = "합";
    cl1.avg = "평균";
    cl1.sub_1 = 10;
    cl1.sub_2 = 20;
    cl1.sum = cl1.sub_1 + cl1.sub_2;
    cl1.ave = (double)cl1.sum / 2;
    cl1.prt();

    A cl2;
    cl2.n = "2";
    cl2.name = "홍길동";
    cl2.sub1 = "수학";
    cl2.sub2 = "과학";
    cl2.hap = "합";
    cl2.avg = "평균";
    cl2.sub_1 = 30;
    cl2.sub_2 = 40;
    cl2.sum = cl2.sub_1 + cl2.sub_2;
    cl2.ave = (double)cl2.sum / 2;
    cl2.prt();

    A cl3;
    cl3.n = "3";
    cl3.name = "박길동";
    cl3.sub1 = "수학";
    cl3.sub2 = "과학";
    cl3.hap = "합";
    cl3.avg = "평균";
    cl3.sub_1 = 100;
    cl3.sub_2 = 40;
    cl3.sum = cl3.sub_1 + cl3.sub_2;
    cl3.ave = (double)cl3.sum / 2;
    cl3.prt();

    A cl4;
    cl4.n = "4";
    cl4.name = "김길동";
    cl4.sub1 = "수학";
    cl4.sub2 = "과학";
    cl4.hap = "합";
    cl4.avg = "평균";
    cl4.sub_1 = 100;
    cl4.sub_2 = 40;
    cl4.sum = cl4.sub_1 + cl4.sub_2;
    cl4.ave = (double)cl4.sum / 2;
    cl4.prt();

    cout << endl << "순서\t가로\t세로\t넓이" << endl;
    Rect cb1;
    cb1.n = 1;
    cb1.weidth = 2;
    cb1.height = 3;
    cb1.getArea();
    cb1.prt();

    Rect cb2;
    cb2.n = 2;
    cb2.weidth = 5;
    cb2.height = 7;
    cb2.getArea();
    cb2.prt();

    Rect cb3;
    cb3.n = 3;
    cb3.weidth = 10;
    cb3.height = 4;
    cb3.getArea();
    cb3.prt();

    return 0;
}
