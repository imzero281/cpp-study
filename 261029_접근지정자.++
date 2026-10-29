#include <iostream>
using namespace std;

class B {
private:
	int num;
	string name;
	int sub_1;
	int sub_2;
public:
	void setB(int n1, string n2, int x, int y) {
		num = n1;
		name = n2;
		sub_1 = x;
		sub_2 = y;
	}
	int getnum() {
		return num;
	}
	string getname() {
		return name;
	}
	int gets1() {
		return sub_1;
	}
	int gets2() {
		return sub_2;
	}

	int sum;
	void sumF() {
		sum = sub_1 + sub_2;
	}

	double ave;
	void aveF() {
		ave = (double)sum / 2;
	}

	void prt() {
		cout << num << "\t" << name << "\t" << sub_1 << "\t" << sub_2 << "\t" << sum << "\t" << ave << endl;
	}
};

int main(void) {

	cout << "번호\t이름\t과목1\t과목2\t합\t평균" << endl;

	B ob1;
	ob1.setB(1, "홍길동", 100, 100);
	ob1.sumF();
	ob1.aveF();
	ob1.prt();


	return 0;
}
