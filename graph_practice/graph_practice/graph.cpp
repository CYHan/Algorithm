#include<iostream>
using namespace std;
const int MAX_V = 5;
int N, M;
int adj[MAX_V][MAX_V];


int main() {
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		int u, v;
		scanf_s("%d %d", &u, &v);

		adj[u][v] = 1;			//�ܹ��� �׷���
		adj[u][v] = adj[v][u] = 1;	 // ����� �׷���
	}

	return 0;
}
