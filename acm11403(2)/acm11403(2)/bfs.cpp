#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int MAX_V = 1001;
bool visited[MAX_V];
int vertex;
vector<int> adj[MAX_V];  // ¿Œ¡¢ vertex

void bfs(int root) {
	queue<int> q;
	q.push(root);
	//visited[root] = true;
	while (!q.empty()) {
		int here = q.front();
		q.pop();
		for (int i = 0; i < adj[here].size(); i++) {
			int there = adj[here][i];
			if (!visited[there]) {
				visited[there] = true;
				q.push(there);
			}
		}
	}
}

void inp() {
	//printf("%d",visited[5]);
	vertex = 10000;
	while (!(vertex <= 100 && vertex >= 1))
		scanf_s("%d", &vertex);



	vector<int> bucket[MAX_V];
	int temp;
	for (int i = 0; i < vertex; i++) {
		for (int j = 0; j < vertex; j++) {
			scanf_s("%d", &temp);
			//adj[i][j] = temp;
			bucket[i].push_back(temp);

		}
	}

	for (int i = 0; i < vertex; i++) {
		for (int j = 0; j < vertex; j++) {
			if (bucket[i][j] == 1) {
				adj[i].push_back(j);

			}

		}
	}



}
void reset() {
	for (int i = 0; i < vertex; i++) {
		if(visited[i])
			visited[i]= 0;
	}
}
void process() {

	for (int i = 0; i < vertex; i++) {
		bfs(i);
		for (int j = 0; j < vertex; j++) {
			printf("%d ", visited[j]);
		}
		printf("\n");
		reset();

	}
}
int main() {

	inp();
	process();


	return 0;
}