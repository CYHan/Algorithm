#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,num,temp,a,b;
const int INF = 20000000;
typedef pair<int,int> PII;
vector<int> dist;
int sum =1000000;
vector<int> out;
vector<int> graph[100000];
void input(){
    scanf("%d%d", &n,&num);
    for(int i=0; i<num; i++){
        scanf("%d%d",&a,&b);
        graph[a-1].push_back(b-1) ; graph[b-1].push_back(a-1);
    }
}
void dfs(int start){
    temp = 0;
    dist.assign(n,INF);
    priority_queue<PII,vector<PII>,greater<PII>> PQ;
    PQ.push({0,start}); dist[start] =0;
    while(!PQ.empty()){
        int here = PQ.top().second;
        PQ.pop();
        for(vector<int>::iterator it = graph[here].begin(); it!=graph[here].end(); it++){
            if(dist[*it]  > 1 + dist[here]){
                dist[*it] = 1 + dist[here];
                PQ.push({dist[*it],*it});
            }
        }
    }
   for(int i=0; i< n; i++){
       // cout << dist[i] << " ";
        temp += dist[i];
    }
    //cout  << endl;

    out.push_back(temp);
    sum = min(sum,temp);
}
void output(){
    for(int i=0; i< n; i++)
        if(out[i] == sum ){printf("%d",i+1); break;}
}

int main() {
    input();
    for(int i=0; i<n; i++) dfs(i);
    output();
}