#include<iostream>
using namespace std;
int N,M,K;
int arr[300][300];
int dist[10000][4];

void input(istream& in) {
	in >> N;
	in >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			in >> arr[i][j];
		}
	}
	in >> K;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < 4; j++) {
			in >> dist[i][j];
		}
	}
}

void out() {
	int sum;
	for (int i = 0; i < K; i++) {
		sum = 0;
		for (int j = dist[i][0]-1; j <= dist[i][2]-1; j++) {  // 거리의 row만 가져와서 그안에서		
			for (int k = dist[i][1]-1; k <= dist[i][3]-1; k++) {
				sum += arr[j][k];
				
			}
		}
		cout << sum << endl;

	}

}

int main() {
	input(cin);
	out();


}