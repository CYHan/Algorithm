#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
vector<int> dist(101,2000000);
const int INF = 20000000;
typedef pair<int,int> PII;
vector<int> graph[101];
int a,b;
int N,M;
priority_queue <PII, vector<PII> , greater<PII>>PQ;
priority_queue <PII, vector<PII> , greater<PII>>PQ_total;
int sum = 20000000;

void dfs(int start){
    dist.assign(N,INF);
    int sub_sum =0;
    PQ.push({0,start});
    dist[start] =0;

    while(!PQ.empty()){
        int here = PQ.top().second;
        PQ.pop();
        for(vector<int>::iterator it = graph[here].begin(); it != graph[here].end(); it++){
            if(dist[*it] > dist[here] + 1){
                dist[*it] = dist[here] +1;
                PQ.push({dist[*it],*it});
            }
        }
    }
    for(int i=0; i< N; i++){
        sub_sum += dist[i];
    }
    PQ_total.push({sub_sum, start});

}

void output(){
    cout << PQ_total.top().second+1 << endl;
}

int main() {
    ifstream fin;
    fin.open("c://input.txt");
    fin >> N >> M;
    while(fin >> a >> b ){
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }

    for(int i = 0; i< N; i++) dfs(i);

    output();
}