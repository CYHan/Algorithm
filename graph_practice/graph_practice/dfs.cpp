#include<iostream>
#include<vector>
using namespace std;
int N, M, S; // 정점의 갯수, 간선의 갯수, 탐색을 시작하는 노드
const int MAX_V = 1001; // 최대 vertex 갯수   
bool visited[MAX_V];	//이미 방문한 vertex의 갯수
vector<int> adj[MAX_V];	// 인접행렬

void dfs(int here) {		//dfs from here 
	printf("%d", here);	
	visited[here] = true;		// 방문한곳을 true로 만듬
	for (int i = 0; i < adj[here].size(); i++) {  // 인접한 애들의 크기만큼
		int there = adj[here][i];	//there = 인접한애들 차례대로 
			
		if (!visited[there]) {		//there에 방문하지 않았다면
			dfs(there);		// there을 dfs돌림. 
		}

	}
}