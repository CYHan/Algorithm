#include <iostream>
#include <vector>
#include <string>
#include<queue>
using namespace std;

const int MAX_X= 1001;
const int MAX_Y= 1001;
int visited[MAX_X][MAX_Y];
int x,y,hx,hy,n,m,temp;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int day = -1;
queue<pair<int,int>> q;
int adj_tomatos = 0;
void bfs(){
    for(int i=0; i< m; i++){
        for(int j=0; j< n; j++){
            if(visited[i][j] == 1) q.push({i,j});
        }
    }
    adj_tomatos = q.size();
    while(!q.empty()){
          hx = q.front().first;
          hy = q.front().second;
          q.pop();
          adj_tomatos-=1;
          for(int i=0; i<4; i++) {
              x = hx + dx[i];
              y = hy + dy[i];
              if(x<0 || y <0 || x >=m || y >=n) continue;

              if (visited[x][y] == 0) {
                  visited[x][y] = 1;
                  q.push({x,y});
              }
          }
         if(!adj_tomatos) {
             adj_tomatos = q.size();
             day += 1;
         }

     }
    for(int i=0; i< m; i ++){
        for(int j=0; j< n; j++){
            if(visited[i][j] == 0) {
                printf("-1");
                return;
            }
        }
    }
    printf("%d", day);
}
void input(){
    scanf("%d%d",&n, &m);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&temp);
            visited[i][j] = temp;
        }
    }


}
int main() {
    input();
    bfs();
}