#include<iostream>
#include<vector>
using namespace std;

const int MAX_V = 5;
int N, M;

vector<int> adj[MAX_V];
int main() {

	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		int u, v;
		scanf("%d %d", &u, &v);

		adj[u].push_back(v);//�ܹ��� �׷���
		adj[u].push_back(v);//����� �׷���
		adj[v].push_back(u);

	}
	return 0;
}