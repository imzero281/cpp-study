#include <iostream>
using namespace std;

class D {
public:
	D() {
		a = 0;
	}
	int a;
	void pr() {
		cout << "Class D a = " << a << endl;
	}
};

void prt(D o) {
	o.pr();
}

D set(D oo) {
	oo.a = 200;
	return oo;
}

int main() {

	D odd;
	odd = set(odd);
	prt(odd);

	return 0;
}
