#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int N;
int arr[600][600];
int temp;
void input(istream& in) {
	in >> N;
	for (int i = 0; i <= N; i++) {
		arr[i][0] = arr[i][i+1] = 0;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j < i+1; j++) {
			in >> temp;
			if (arr[i - 1][j - 1] >= arr[i - 1][j]) {
				arr[i][j] = arr[i - 1][j - 1] + temp;
			}
			else {
				arr[i][j] = arr[i - 1][j] + temp;
			}
		}
	}
}
int maxim = 1;
void mathodd() {
	sort(&arr[N][0], &arr[N][N]);

	/*for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[N][i] << " ";
	}
	*/
	for (int i = 1; i <= N; i++) {
		maxim = max(maxim, arr[N][i]);
	}
	cout << maxim << endl;
}
int main() {

	input(cin);
	mathodd();

}