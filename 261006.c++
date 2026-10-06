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

	int* ap = &a;
	cout << "ap = " << ap << endl;
	cout << "*ap = " << *ap << endl;
	*ap = 70;
	cout << "ap = " << ap << endl;
	cout << "*ap = " << *ap << endl;
	cout << "a = " << a << endl;

//===== 배열과 포인터	======
#include <iostream>
#include <iomanip>

using namespace std;

void prEx(int* ap) {
	*ap = 100;
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void pr(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "	";
	}
	cout << endl;
}

//배열 매개변수로 배열 원소 출력
void prAr(int* b, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(b + i) << "	";
	}
	cout << endl;
}

//배열의 원소 +2를 하는 함수 
void prS(int* a, int n) {
	for (int i = 0; i < n; i++) {
		a[i] += 2;
	}
	cout<<endl;
}

int main(void) {
	
	int a = 10;
	cout << "a = " << a << endl;
	prEx(&a);
	cout << "a = " << a << endl;

	int x = 10;
	int y = 20;
	cout << "교환 전 " << x << " " << y << endl;
	swap(&x, &y);
	cout << "교환 후 " << x << " " << y << endl;

	//=====배열과 포인터=====
	cout << "\n배열과 포인터" << endl;
	int ar[] = { 1,2,3 };
	printf("%d\n", ar);
	printf("%d\n", ar+1);
	printf("%d\n", ar+3);

	printf("%d\n", &ar[0]);
	printf("%d\n", &ar[1]);
	printf("%d\n", &ar[2]);
	
	cout << ar[0] << endl;
	cout << *ar << endl;

	cout << ar[1] << endl;
	cout << *(ar+1) << endl;

	cout << ar[2] << endl;
	cout << *(ar+2) << endl;
	
	pr(ar, 3);

	int arr[] = { 4,5,6 };
	prAr(arr, 3);

	prS(ar, 3);
	
	return 0;
}


	return 0;
}

