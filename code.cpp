/**********************************************************************************************************
1023번 문제
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int k, b = 0;
	cin >> k >> b;
	int a = 1000 * k;
	int z = 365000 / (a + b);
	int x = 0;
	int r = 0;
	while(x<365000) {
		r += 1;
		x = (a + b) * r;
	}
	int abc = ceil(float((365000 - (x - (a + b))))/1000);
	if (abc < k) {
		cout << (r-1) * k + abc << " " << ((r - 1) * k + abc) * 8900 << " " << x - (a + b) + abc * 1000;
	}
	else {
		cout << r * k << " " << r * k * 8900 << " " << x;
	}
	return 0;
}
*/

/**********************************************************************************************************
 1027번 문제
#include <iostream>

int minIdx(int* ptr, int* ptr2, int n) {
	int min = ptr[0];
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (min > ptr[i]) {
			min = ptr[i];
			idx = i;
		}
		else if (min == ptr[i] && i != 0) {
			if (ptr2[idx] > ptr2[i]) {
				idx = i;
			}
			min = ptr[i];
		}
	}
	return idx;
}

int main() {
	int a = 0;
	std::cin >> a;
	int* arr1 = new int[a]();
	int* arr2 = new int[a]();

	for (int i = 0; i < a; i++) {
		std::cin >> arr1[i];
		arr2[i] = 0;
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr2[i] += abs(arr1[i] - arr1[j]);
		}
	}

	std::cout << arr1[minIdx(arr2, arr1, a)];

	return 0;
}
*/

/**********************************************************************************************************
* 1033번 문제
#include <iostream>
#include <string>

int main() {
	int output[26] = { 0, };
	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.length(); i++) {
		switch (input[i]){
		case 'a':
			output[0] += 1;
			break;
		case 'b':
			output[1] += 1;
			break;
		case 'c':
			output[2] += 1;
			break;
		case 'd':
			output[3] += 1;
			break;
		case 'e':
			output[4] += 1;
			break;
		case 'f':
			output[5] += 1;
			break;
		case 'g':
			output[6] += 1;
			break;
		case 'h':
			output[7] += 1;
			break;
		case 'i':
			output[8] += 1;
			break;
		case 'j':
			output[9] += 1;
			break;
		case 'k':
			output[10] += 1;
			break;
		case 'l':
			output[11] += 1;
			break;
		case 'm':
			output[12] += 1;
			break;
		case 'n':
			output[13] += 1;
			break;
		case 'o':
			output[14] += 1;
			break;
		case 'p':
			output[15] += 1;
			break;
		case 'q':
			output[16] += 1;
			break;
		case 'r':
			output[17] += 1;
			break;
		case 's':
			output[18] += 1;
			break;
		case 't':
			output[19] += 1;
			break;
		case 'u':
			output[20] += 1;
			break;
		case 'v':
			output[21] += 1;
			break;
		case 'w':
			output[22] += 1;
			break;
		case 'x':
			output[23] += 1;
			break;
		case 'y':
			output[24] += 1;
			break;
		case 'z':
			output[25] += 1;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < 25; i++) {
		std::cout << output[i] << " ";
	}
	std::cout << output[25];

	return 0;
}
*/

/**********************************************************************************************************
* 1034번 문제
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	char input[3][8];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> input[i][j];
		}
	}

	int numPast[3][8] = { 0, };

	for (int i = 0; i < 3; i++) {
		char state = '0';
		int numNow = 0;
		int numstate = 0;
		for (int j = 0; j < 8; j++) {
			if (state == input[i][j]) {
				state = input[i][j];
				numNow++;
			}
			else if (state != input[i][j]) {
				numPast[i][numstate] = numNow+1;
				numNow = 0;
				numstate++;
				state = input[i][j];
			}
			if (j == 7) {
				numPast[i][numstate] = numNow + 1;
			}
		}
	}
	int output[] = { 0, 0, 0 , 0 , 0 , 0 , 0 , 0 };
	for (int i = 0; i < 8; i++) output[i] = numPast[0][i];
	cout << *max_element(output, output+8) << endl;

	for (int i = 0; i < 8; i++) output[i] = numPast[1][i];
	cout << *max_element(output, output + 8) << endl;

	for (int i = 0; i < 8; i++) output[i] = numPast[2][i];
	cout << *max_element(output, output + 8) << endl;

	return 0;
}
*/

/**********************************************************************************************************
* 1035번 문제
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	b += c;
	d = b / 60;
	a += d;
	b = b % 60;
	d = a / 24;
	a = a - d*24;

	cout << a << " " << b;

	return 0;
}
*/

/**********************************************************************************************************
* 1036번 문제
#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	int b = a;
	cout << 'a';
	for (int i = 97; i < b; i++) {
		cout << " ";
		int c = i + 1;
		a = c;
		cout << a;
	}
	return 0;
}
*/

/**********************************************************************************************************
* 1044번 문제
#include <iostream>
using namespace std;
int main() {
	int a;
	int b = 1;
	cin >> a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << b <<" ";
			b++;
		}
		cout << endl;
	}
	return 0;
}
*/

/**********************************************************************************************************
* 1045번 문제
#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			int b = a * (a-j);
			cout << b - i << " ";
		}
		cout << endl;
	}
	return 0;
}
*/

/**********************************************************************************************************
* 1046번 문제
#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	int x = a;
	int arr1[10][10] = { 0, };
	int arr2[10][10] = { 0, };
	int arr3[10][10] = { 0, };

	int d = a * a;
	for (int i = 0; i < a; i++) {
		arr2[i][0] = d;
		int c = d;
		for (int j = 1; j < x; j++) {
			c = c - j - (a - x);
			arr2[i][j] = c;
		}
		x--;
		d = d - i - 2;
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr3[i][j] = arr2[j][i];
		}
	}

	int idx = a - 1;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr1[idx - j][idx - i] = arr3[i][j];
		}
	}

	int b = 0;
	x = a;
	for (int i = 0; i < a; i++) {
		b += i + 1;
		arr1[i][0] = b;
		int c = b;
		for (int j = 1; j < x; j++) {
			int z = a - x;
			c += j + z;
			arr1[i][j] = c;
		}
		x--;
	}



	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << arr1[i][j]<<" ";
		}
		cout << endl;
	}

	return 0;
}

// 대표님 코드
//int main() {
//
//	int n;
//	int arr[20][20] = {};
//	scanf("%d", &n);
//	int i, j, k;
//	int c = 1;
//	for (i = 0; i < n * n; i++) {
//		for (j = 0; j < n; j++) {
//			for (k = 0; k < n; k++) {
//				if (j + k == i) {
//					arr[j][k] = c;
//					c++;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

*/

/**********************************************************************************************************
* 1049번 문제
#include <iostream>

using namespace std;

int main() {
	char arr[9][9] = { '0', };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

	int val = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			val += arr[i][j];
		}
		if (val > 477) {
			val = 477 - val + 63;
			break;
		}
		val = 0;
	}

	cout << (char)val;

	return 0;
}
*/

/**********************************************************************************************************
* 1057번 문제
#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << 10000 + a * 1000;
	}
	else if (a == b || b == c || a == c) {
		if (a == b) {
			cout << 1000 + a * 100;
		}
		else if (b == c) {
			cout << 1000 + b * 100;
		}
		else if (a == c) {
			cout << 1000 + c * 100;
		}
	}
	else {
		if (a > b) {
			if (a > c) {
				cout << a * 100;
			}
			else {
				cout << c * 100;
			}
		}
		else if (b > c) {
			cout << b * 100;
		}
		else {
			cout << c * 100;
		}
	}
	return 0;
}
*/

/**********************************************************************************************************
* 1061번 문제
#include <iostream>

using namespace std;

int main() {
	int arr1[3][2] = { 0, };
	int arr2[2] = { 0, };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr1[i][j];
		}
	}

	if (arr1[0][0] == arr1[1][0]) {
		arr2[0] = arr1[2][0];
	}
	else if (arr1[0][0] == arr1[2][0]) {
		arr2[0] = arr1[1][0];
	}
	else if (arr1[1][0] == arr1[2][0]) {
		arr2[0] = arr1[0][0];
	}

	if (arr1[0][1] == arr1[1][1]) {
		arr2[1] = arr1[2][1];
	}
	else if (arr1[0][1] == arr1[2][1]) {
		arr2[1] = arr1[1][1];
	}
	else if (arr1[1][1] == arr1[2][1]) {
		arr2[1] = arr1[0][1];
	}

	cout << arr2[0] << " " << arr2[1];

	return 0;
}
*/

/**********************************************************************************************************
* 1065번 문제
#include <iostream>

using ll = long long;
using namespace std;

int main() {
	ll l, r;
	cin >> l >> r;

	ll cnt = 0;
	while (l > 0 || r > 0) {
		cnt += r - l;
		r /= 10, l /= 10;
	}

	cout << cnt;
}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	int l, r, c;
//	int b = 0;
//	cin >> l >> r;
//	while (l != r) {
//		c = 0;
//		int j = l;
//		while(1) {
//			if (j % 10 == 9) {
//				c++;
//				j /= 10;
//			}
//			else {
//				b += c;
//				break;
//			}
//		}
//		l++;
//		b++;
//	}
//	cout << b;
//	return 0;
//}
*/




/**********************************************************************************************************
* 1085번 문제
//치킨 맥너겟 이론
#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, x, a = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;
		if (x > 1099) {
			cout << "YES" << endl;
			a++;
		}
		else
			for (int j = 0; 111 * j <= x; j++)
				if ((x - 111 * j) % 11 == 0) {
					cout << "YES" << endl;
					a++;
				}
		if (a == 0) cout << "NO" << endl;
		a = 0;
	}
	return 0;
}
*/

/**********************************************************************************************************
// 1087 평균 1로 만들기
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int a = 0;
		for (int i = 0; i < n; i++) {
			int b;
			cin >> b;
			a += b;
		}
		if (a < 0) cout << 1 << endl;
		else cout << a - n << endl;
	}
	return 0;
}
*/

// 1088 [대곽]행렬 회전과 반전
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[4][4];
	int tmp[4][4];
	int i, j, k;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int N;
	scanf("%d", &N);
	for (k = 0; k < N; k++) {
		int cmd;
		scanf("%d", &cmd);
		if (cmd == 1) {
			//시계방향
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					tmp[][] = arr[i][j];
				}
			}
		}
		else if (cmd == 2) {
			//반시계
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					tmp[][] = arr[i][j];
				}
			}
		}
		else if (cmd == 3) {
			//좌우
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					tmp[][] = arr[i][j];
				}
			}
		}
		else if (cmd == 4) {
			//상하
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					tmp[][] = arr[i][j];
				}
			}
		}
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				arr[i][j] = tmp[i][j];
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}

/**********************************************************************************************************

*/