#include <iostream>
using namespace std;

class B {
private:
	int x;
	int y;
	int sum = 0;
	double ave;

public:
	int n;
	void setB(int xF, int yF) {
		x = xF;
		y = yF;
		sum = xF + yF;
		ave = (double)sum / 2;
	}

	void prtB() {
		cout << n << "\t" << x << "\t" << y << "\t" << sum << "\t" << ave << endl;
	}

};

int main() {
	cout << "순서	x	y	합	평균" << endl;

	B ob1;
	ob1.n = 1;
	ob1.setB(10, 10);
	ob1.prtB();

	B ob2;
	ob2.n = 2;
	ob2.setB(20, 30);
	ob2.prtB();

	return 0;
}
