#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int a,b,c,d;
int cnt;
vector<int>arr;
vector<bool> visited;
vector<int>graph[10001];
void input(){
    scanf("%d%d",&a,&b);
    arr.assign(a,0);
    for(int i=0; i<b; i++){
        scanf("%d%d",&c,&d);
        graph[--d].push_back(--c);
    }
}
int maxim =0;
void bfs(int start){
    visited.assign(a,0);
    cnt=0;
    queue<int> q;
    q.push(start);  visited[start] = true;
    while(!q.empty()){
        int here = q.front(); cnt+=1;
        q.pop();
        for(int i=0; i<graph[here].size(); i++){
            if(visited[graph[here][i]] == true) continue;
            visited[graph[here][i]] = true;
            q.push(graph[here][i]);
        }
    }
    arr[start] = cnt;
    maxim = max(cnt,maxim);
}

void output(){
    for(int i=0; i< arr.size(); i++)
       if (maxim == arr[i]) printf("%d ", i + 1);
}
int main() {
    input();
    for(int i=0; i< a; i++) bfs(i);
    output();
}