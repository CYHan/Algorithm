#include <iostream>
#include <queue>
using namespace std;
typedef pair<short,short> PII;
int num;
int maxim = 0;
int total_cnt =0;
int adjust =0;
int before =0;
int x;
int y;
PII here;
queue<PII> q;
int after =0;
int arr[501][501];
const short dx[] ={ 0, 0, -1, 1 };
const short dy[] = { 1, -1, 0, 0 };
void input(){
    scanf("%d",&num);
    for(short i=0; i< num; i++)
        for (short j=0; j< num; j++)
            scanf("%d",&arr[i][j]);
}
void bfs(short &r, short &c){
    total_cnt =0;
    q.push({r,c});
    adjust = q.size();
    while(!q.empty()){
        here = q.front();
        q.pop();
        adjust -=1;
        for(int i=0; i< 4; i++){
            before = arr[here.first][here.second];
            x = here.first + dx[i];
            y = here.second + dy[i];
            if(x < 0 || x >= num || y <0 || y >=num ) continue;
            after = arr[x][y];
            if(after > before) {
                q.push({x,y});
            }
        }
        if(adjust==0){
            adjust = q.size();
            total_cnt +=1;
        }
    }
    maxim = max(maxim,total_cnt);
    // cout << total_cnt << endl ;
}
void output(){
    printf("%d",maxim);
}

int main() {
    input();
    for(short i=0; i< num; i++)
        for (short j=0; j< num; j++)
            bfs(i,j);
    output();
}