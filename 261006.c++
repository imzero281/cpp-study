#include <iostream>
#include <iomanip> //c++에서 printf쓰려면 꼭 써줘야 함

using namespace std;

int main(void) {
	//===== 자릿수 출력 ======
	int a = 10;
	cout << "===== 1.printf()출력 ======" << endl;
	printf("	   : 1234567890\n");

	//기본 출력: 숫자 그대로 출력
	printf("기본 출력  : %d\n", a);

	//공백을 이용한 출력
	printf("공백 추가  : %d	\n", a);

	//탭(\t)을 이용한 출력
	printf("탭 사용    : \t%d\n", a);

	//전체 너비 5칸, 오른쪽 정렬
	printf("5칸 오른쪽 : %5d\n", a);

	//전체 너비 5칸 왼쪽 정렬
	printf("5칸 왼쪽   : %-5d\n", a);

	a = 30;
	cout << "\n===== 2.setw()출력 =====" << endl;
	cout << "	 : 1234567890" << endl;
	
	//너비 7칸, 기본 오른쪽 정렬
	cout << "7칸 기본 : " << setw(7) << a << endl;

	//너비 7칸, 왼쪽 정렬
	cout << "7칸 왼쪽 : " << left << setw(7) << a << endl;

	//너비 7칸, 오른쪽 정렬
	cout << "7칸 오른쪽 : " << right << setw(7) << a << endl;

	//소수점 자르기
	cout.precision(3);
	cout << (double)1 / 3 << endl;

	// ===== 포인터 ======
	cout << endl;
	a = 50;
	cout << "a = " << a << endl;
	cout << "a의 주소 " << &a << endl;

	printf("a의 주소 = %d\n", &a);
	printf("a의 주소 = %p\n", &a);
	return 0;
}

