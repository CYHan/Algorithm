#include <iostream>
#include <vector>
#include <queue>
#include<stdlib.h>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
const int MAX_N = 51;
const int MAX_M = 51;
int visited[MAX_N][MAX_M];
int x,y,hx,hy;
int temp1=0;
int temp2= 0;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int m,n,k,num;
vector<int> outpu;

void input(){
    for(int i=0; i<MAX_N; i++){
        for(int j =0; j< MAX_M; j++){
            visited[i][j] =0;
        }
    }

    scanf("%d %d %d",&m, &n, &k);


    for(int j=0; j< k; j++){
        scanf("%d %d",&temp1, &temp2);
        visited[temp2][temp1] = 1;
    }
}

void bfs(){
    int total =0;
    queue<pair<int,int>> q;
    for(int i=0; i< n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j] == 1){
                q.push({i,j});
                while(!q.empty()){
                    hx = q.front().first; hy = q.front().second;
                    q.pop();
                    for(int z=0; z < 4; z++){
                        x = dx[z] + hx;
                        y = dy[z] + hy;
                        if(x >= n || y >= m || x<0 || y <0) continue;
                        if(visited[x][y] == 1){
                            q.push({x,y});
                            visited[x][y] = 0;
                        }
                    }
                }
             /*   for(int as=0; as < n; as++){
                    for(int aa=0; aa <m; aa ++){
                        cout << visited[as][aa] << " " ;
                    }
                    cout << endl;
                }
                cout << endl << endl;
*/
                total+=1;
            }
        }
    }
   // cout << cnt  << endl;
    outpu.push_back(total);

}


int main() {
    scanf("%d",&num);
    for(int i=0; i< num; i++){
        input();
        bfs();
    }

    for(vector<int>::iterator it = outpu.begin(); it!=outpu.end(); it++){
       printf("%d\n", *it);
   }

}