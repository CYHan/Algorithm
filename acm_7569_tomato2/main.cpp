#include <iostream>
#include <vector>
#include <string>
#include<queue>
using namespace std;
const int MAX_X= 101;
const int MAX_Y= 101;
const int MAX_Z = 101;
int visited[MAX_X][MAX_Y][MAX_Z];
int x,y,hx,hy,hz,n,m,temp,h,z;
int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,-1,1,0,0};
int dz[] = {0, 0, 0, 0, 1,-1};
int day = -1;
queue<vector<int>> q;
int adj_tomatos = 0;
vector<int>arr(3);
void bfs(){
    for(int i=0; i< h; i++)for(int j=0; j< m; j++)for(int k=0; k< n; k++)
                if(visited[j][k][i] == 1){
                    arr[0] = j; arr[1] = k; arr[2] = i;
                    q.push(arr);
                }
    adj_tomatos = q.size();
    while(!q.empty()){
        hx = q.front()[0];
        hy = q.front()[1];
        hz = q.front()[2];
        q.pop();
        adj_tomatos-=1;
        for(int i=0; i<6; i++) {
            x = hx + dx[i];
            y = hy + dy[i];
            z = hz + dz[i];
            if(x<0 || y <0 || z<0||x >=m || y >=n || z >=h) continue;

            if (visited[x][y][z] == 0) {
                visited[x][y][z] = 1;
                arr[0] = x; arr[1] = y; arr[2] = z;
                q.push(arr);
            }
        }
        if(!adj_tomatos) {
            adj_tomatos = q.size();
            day += 1;
        }

    }
    for(int i=0; i<h; i++)for(int j=0; j< m; j ++)for(int k=0; k< n; k++)
            if(visited[j][k][i] == 0) {printf("-1"); return;}

    printf("%d", day);
}
void input(){
    scanf("%d%d%d",&n, &m, &h);
    for(int i=0; i< h; i++)for(int j=0; j<m; j++)for(int k=0; k<n; k++)
                scanf("%d",&temp), visited[j][k][i] = temp;
}
int main() {
    input();bfs();
}