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
        graph[--c].push_back(--d);
    }
}
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
            arr[graph[here][i]] =max(arr[graph[here][i]] , cnt);
            q.push(graph[here][i]);

        }
    }

}

void output(){
    int maxim =0;
    for(vector<int>::iterator it = arr.begin(); it!= arr.end(); it++) maxim = max(*it,maxim);
    for(int i=0; i< arr.size(); i++) {
        //cout << arr[i] << " ";
        if (maxim == arr[i]) printf("%d ", i + 1);

    }
}
int main() {
    input();
    for(int i=0; i< a; i++) bfs(i);
    output();
}