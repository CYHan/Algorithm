#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;

int n,m;
vector<int> arr;
int temp;
void input(istream& in) {
	scanf("%d%d", &n, &m); 
	for (int i = 0; i < n; i++) {
			scanf("%d",&temp);
			arr.push_back(temp);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &temp);
		arr.push_back(temp);
	}



}

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}


void output() {
	qsort(&arr[0],arr.size(),sizeof(int),compare);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
}
int main() {
	input(cin);
	output();

}