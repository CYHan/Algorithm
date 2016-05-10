#include<iostream>
#include<vector>
using namespace std;
int N, M, S; // ������ ����, ������ ����, Ž���� �����ϴ� ���
const int MAX_V = 1001; // �ִ� vertex ����   
bool visited[MAX_V];	//�̹� �湮�� vertex�� ����
vector<int> adj[MAX_V];	// �������

void dfs(int here) {		//dfs from here 
	printf("%d", here);	
	visited[here] = true;		// �湮�Ѱ��� true�� ����
	for (int i = 0; i < adj[here].size(); i++) {  // ������ �ֵ��� ũ�⸸ŭ
		int there = adj[here][i];	//there = �����Ѿֵ� ���ʴ�� 
			
		if (!visited[there]) {		//there�� �湮���� �ʾҴٸ�
			dfs(there);		// there�� dfs����. 
		}

	}
}