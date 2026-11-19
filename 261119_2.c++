#include <iostream>
using namespace std;

class A {
public:
	int data;
	A* next;
	A(int a) {
		data = a;
		next = NULL;
	}
	//함수
	A* add(A* ap) {
		this->next = ap; //매개변수로 가져온 것을 this->next에 저장
		return ap;
	}
	void prt() {
		cout << data << endl;
	}
};

int main() {

	A* tmp = new A(10);
	A* last = tmp;
	
	last = last->add(new A(20));
	last = last->add(new A(30));
	last = last->add(new A(40));

	while (tmp != NULL) {
		tmp->prt();
		tmp = tmp->next;
	}
	while(tmp)
	return 0;
}
