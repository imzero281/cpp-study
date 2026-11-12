#include <iostream>
#include <string>
using namespace std;

class A {
private:
	string name;
public:
	void setName(string nameF) {
		name = nameF;
	}
	string getName() {
		return name;
	}
};

class B {
protected:
	int c_sc;

};

class C :public A, public B {
private:
	int java_sc;
public:
	int n;
	int sum;
	double ave;
	void setBC(int y, int z) {
		c_sc = y;
		java_sc = z;
	}
	int getC() {
		return java_sc;
	}

	void setSum() {
		sum = c_sc + java_sc;
	}
	void setAve() {
		setSum(); // 합 호출
		ave = (double) sum/ 2;
	}
	void prtC() {
		cout << n << "\t" << getName() << "\t" << c_sc << "\t" << java_sc << "\t" << sum << "\t" << ave << endl;
	}
};

int main() {

	cout << "순서\t이름\tc\tjava\t합\t평균" << endl;
	C oc;
	oc.n = 1;
	oc.setName("홍길동");
	oc.setBC(100, 100);
	oc.setSum();
	oc.setAve();
	oc.prtC();


	
	return 0;
} 
