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
	A(){}
};
int main() {

	A oa1(10);
	cout << oa1.data << endl;

	A oa2(20);
	oa1.next = &oa2; //첫번째 객체에 next(주소)를 저장
	cout << oa1.next->data << endl; // 첫번째 객체를 이용해서 출력 -> 20
	cout << oa2.data << endl; //똑같이 20 출력

	A oa3(30);
	oa2.next = &oa3;
	cout << oa1.next->next->data << endl; // 30 출력

	//많이 쓰는 방법!! 🤨
	A* start = &oa1;
	while (start != NULL) {
		cout << start->data << " ";
		start = start->next; 
	} // 10 20 30 출력

	return 0;
}
