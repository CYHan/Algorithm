#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector <int> g[32005];
int cnt[32005];
queue <int> q;
int main(){
    int N, M;
    int i,j,k;
    int s, m;
    scanf("%d %d",&N,&M);
    for(i = 1 ; i <= M ; i ++){
        scanf("%d %d",&s,&m);
        g[s].push_back(m);
        cnt[m] ++;
    }

    for(i = 1 ; i <= N ; i ++){
        if(cnt[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ",x);
        for(i = 0 ; i < g[x].size(); i ++){
            cnt[g[x][i]] --;
            if(cnt[g[x][i]] == 0){
                q.push(g[x][i]);
            }
        }
    }
    return 0;
}