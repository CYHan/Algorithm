#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef pair<int, string > PIS;
int num;
int a;
char b[101];
string wow;
vector<PIS>arr[200];
void input(istream& in) {

	scanf("%d", &num);
	string tot;
	vector<PIS> temp;
	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		scanf("%101s", b);
		arr[a - 1].push_back(make_pair(a, b));
	}

}
int siz;
int method() {
	for (int i = 0; i < 200; i++) {
		siz = arr[i].size();
		if (siz < 1) continue;
		for (int j = 0; j < siz; j++) {
			printf("%d ", arr[i][j].first);
			printf("%s\n", arr[i][j].second.c_str());
			//cout << arr[i][j].first << " " << arr[i][j].second << endl;
		}
	}
	return 0;
}


int main() {

	input(cin);
	method();
}