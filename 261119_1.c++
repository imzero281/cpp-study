#include <iostream>
using namespace std;

class B {
public:
	int data;
	B* next;
	B(int a) {
		data = a;
		next = NULL;
	}
};

int main() {

	B ob1(10);
	B ob2(20);
	B ob3(30);

	ob1.next = &ob2;
	ob2.next = &ob3;

	cout << ob1.data << endl;
	cout << ob1.next->data << endl;
	cout << ob1.next->next->data << endl;
	
	//while문 사용해서 한번에 출력하기
	cout << "\nwhile문 사용해서 한번에 출력하기" << endl;
	B* s = &ob1;
	while (s != NULL) {
		cout << s->data << endl;
		s=s->next;
	}

	cout << endl;
	B* pob1 = new B(100);
	B* pob2 = new B(200);
	pob1->next = pob2;
	cout << "pob2->data " << pob2->data << endl;
	cout << "pob1->next->data " << pob1->next->data << endl<<endl;

	//while문 사용해서 한번에 출력하기
	cout << "while문 사용해서 한번에 출력하기" << endl;
	B* tmp = pob1; //첫번째 객체의 주소 저장?
	while (tmp != NULL) {
		cout << tmp->data << endl;
		tmp = tmp->next;
	}


	return 0;
}
