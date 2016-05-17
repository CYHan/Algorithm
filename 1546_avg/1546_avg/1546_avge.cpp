#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	char a[1000];
	int inp;
	cin >> inp;
	for (int i = 0; i< inp; i++) {
		cin >> a;
	}
	float sum = 0;
	int ma = 0;
	for (int i = 0; i< inp; i++) {
		ma = max(ma, int(a[i]));
	}
	for (int i = 0; i< inp; i++) {
		a[i] = a[i] / ma * 100;
		cout << a[i] << endl;
		sum += a[i];
	}
	printf("%.2f", sum / inp);

	return 0;
}