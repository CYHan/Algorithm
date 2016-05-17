#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	float a[1000];
	int inp;
	cin >> inp;
	for (int i = 0; i< inp; i++) {
		cin >> a[i];
	}
	float sum = 0;
	int ma;
	sort(a, a + inp);
	ma = a[inp - 1];
	float k;
	for (int i = 0; i< inp; i++) {
		float q = a[i];
		k= q/ma*100;
		sum += k;
	}
	printf("%.2f", sum / inp);

	return 0;
}