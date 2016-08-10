#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX_N = 100000;
int n, m;
int par[MAX_N + 1], lv[MAX_N + 1];
bool ck[MAX_N + 1];
vector<int> adj[MAX_N + 1];
void dfs(int h){
    ck[h] = true;
    for (auto it : adj[h]){
        if (ck[it]) continue;
        lv[it] = lv[h] + 1;
        par[it] = h;
        dfs(it);
    }
}
int lca(int x, int y){
    if (lv[x] < lv[y]) swap(x, y);
    for (; lv[x] != lv[y]; x = par[x]);
    while (x != y) x = par[x], y = par[y];
    return x;
}
int main(){
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    scanf("%d", &m);
    for (int i = 0; i < m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", lca(a, b));
    }
    return 0;
}