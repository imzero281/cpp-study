#include <iostream>
using namespace std;

class A {
public:
	int data;
	int data1;
	A* next;
	A(int a, int b) {
		data = a;
		data1 = b;
		next = NULL;
	}
	
	//함수
	A* add(A* ap) {
		this->next = ap; //매개변수로 가져온 것을 this->next에 저장
		return ap;
	}
	void prt() {
		cout << data << " "<< data1 << endl;
	}
};

int main() {

	A* tmp = new A(10, 100);
	A* last = tmp;
	
	last = last->add(new A(20, 200));
	last = last->add(new A(30, 300));
	last = last->add(new A(40, 400));
	last = last->add(new A(50, 500));
	last = last->add(new A(60, 600));

	while (tmp != NULL) {
		tmp->prt();
		tmp = tmp->next;
	}
	
	return 0;
}
