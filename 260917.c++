#include <iostream>
using namespace std;

int main(void) {

	int s[3][5] = { {0,1,2,3,4},
					{10,11,12,13,14},
					{20,21,22,23,24} };

	cout << "1행 출력" << endl;
	for (int i = 0; i < 5; i++) {
		cout << s[0][i] << "	";
	}

	cout << endl;
	cout << endl << "2행 출력" << endl;

	for (int i = 0; i < 5; i++) {
		cout << s[1][i] << "	";
	}

	cout << endl;
	cout << endl << "3행 출력" << endl;
	for (int i = 0; i < 5; i++) {
		cout << s[2][i] << "	";
	}

	cout << endl;
	cout << endl << "2중 for문 출력" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << s[i][j] << "	";
		}
		cout << endl;
	}
	return 0;
}

//이차원 배열 원하는 행, 열 출력하기 (가로,세로로)
#include <iostream>
using namespace std;

int main(void) {

	int s[3][5] = { {0,1,2,3,4},
			   {10,11,12,13,14},
			   {20,21,22,23,24} };

	int n;
	cout << "출력하기 원하는 행의 숫자를 입력하세요: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cout << s[n][j]<<"	";
		}
	}

	int x;
	cout << endl << "출력하기 원하는 열의 숫자를 입력하세요: ";
	cin >> x;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < x; j++) {
			cout << s[i][j] << endl;
		}
	}



	int s[3][4];
	cout << "3행 4열의 1행 원소를 입력하세요: ";
	
	for (int i = 0; i < 4; i++) {
			cin >> s[0][i];
	}
	
	cout << endl << "3행 4열의 2행 원소를 입력하세요: ";

	for (int i = 0; i < 4; i++) {
			cin >> s[1][i];
	}
	

	cout << endl << "3행 4열의 3행 원소를 입력하세요: ";

	for (int i = 0; i < 4; i++) {
		cin >> s[2][i];
	}

	cout << endl << "2차원 배열 원소 출력" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << s[i][j]<<"	";
		}
		cout << endl;
	}

	int sum = 0;
	cout << endl << "1행의 합 출력 = " ;

	for (int i = 0; i < 4; i++) {
		sum += s[0][i];
	}
	cout << sum<<endl;

	sum = 0;
	cout << endl << "2행의 합 출력 = ";

	for (int i = 0; i < 4; i++) {
		sum += s[1][i];
	}
	cout << sum << endl;

	sum = 0;
	cout << endl << "3행의 합 출력 = ";

	for (int i = 0; i < 4; i++) {
		sum += s[2][i];
	}
	cout << sum << endl;

	sum = 0;
	cout << endl << "1열의 합 출력 = ";

	for (int i = 0; i < 3; i++) {
		sum += s[i][0];
	}
	cout << sum << endl;

	sum = 0;
	cout << endl << "2열의 합 출력 = " ;

	for (int i = 0; i < 3; i++) {
		sum += s[i][1];
	}
	cout << sum << endl;

	return 0;
}
