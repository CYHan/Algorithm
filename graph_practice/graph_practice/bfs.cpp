#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int MAX_V = 1001;
int N, M, S;
bool visited[MAX_V];
vector<int> adj[MAX_V];

void bfs(int root) {

	visited[root] = true;

	queue<int> q;
	q.push(root);

	while (!q.empty()) {
		int here = q.front();
		q.pop();
		printf("%d",here);

		for (int i = 0; i < adj[here].size(); i++) {
			int there = adj[here][i];
			if (!visited[there]) {
				visited[there] = true;
				q.push(there);
			}
		}

	}

}
