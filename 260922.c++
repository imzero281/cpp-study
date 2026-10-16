#include <iostream>
using namespace std;

// 함수
int sum(int x, int y) {
	int hap;
	hap = x + y;
	return hap;
}

int sum(int a, int b) {
    int hap = a + b;
    return hap;
}

int sub(int a, int b) {
    int min = a - b;
    return min;
}

int mul(int a, int b) {
    int gop = a * b;
    return gop;
}

double divide(double a, double b) {
    double na1 = a / b;
    return na1;
}

int rem(int a, int b) {
    int na2 = a % b;
    return na2;
}

int main() {

    cout << "4와 5의 합 = " << sum(4, 5) << endl;
	cout << "542와 5의 합 = " << sum(542, 5) << endl;
	cout << "784와 45의 합 = " << sum(784, 45) << endl;
	cout << "124와 95의 합 = " << sum(124, 95) << endl;

    //2번째 시간부터 나간 진도
    cout << sum(10, 20) << endl;

    int x = 20;
    int y = 30;

    int hap = sum(x, y);
    cout << x << " + " << y << " = " << hap << endl;


    cout << sub(10, 20) << endl;

    x = 20;
    y = 30;

    int min = sub(x, y);
    cout << x << " - " << y << " = " << min << endl;


    cout << mul(10, 20) << endl;

    x = 20;
    y = 30;

    int gop = mul(x, y);
    cout << x << " * " << y << " = " << gop << endl;


    cout << divide(10, 20) << endl;

    x = 20;
    y = 30;

    double na1 = divide(x, y);
    cout << x << " / " << y << " = " << na1 << endl;


    cout << rem(10, 20) << endl;

    x = 20;
    y = 30;

    int na2 = rem(x, y);
    cout << x << " % " << y << " = " << na2 << endl;

    return 0;
}
