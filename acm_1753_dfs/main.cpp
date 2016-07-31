#include<queue>
#include<cstdio>
#include<functional>
#include<iostream>
using namespace std;
const int INF = 20000000;
typedef pair<int, int> PII;

int main() {
    int N, M, s;
    scanf("%d%d%d",&N,&M,&s);s -= 1;
    vector<vector<PII>> edges(N);
    for (int i = 0; i < M; i++) {
        int src, vertex, dist;
        scanf("%d%d%d",&src,&vertex,&dist);
        src -= 1, vertex -= 1;
        edges[src].push_back(make_pair(dist, vertex));
    }
    priority_queue<PII, vector<PII>, greater<PII>> PQ;
    vector<int> dist(N, INF);
    PQ.push(make_pair(0, s));
    dist[s] = 0;
    while (!PQ.empty()) {
        PII p = PQ.top();
        PQ.pop();
        int here = p.second;
        for (vector<PII>::iterator it = edges[here].begin(); it != edges[here].end(); it++) {
            if (dist[here] + it->first < dist[it->second]) {
                dist[it->second] = dist[here] + it->first;
                PQ.push(make_pair(dist[it->second], it->second));
            }
        }
    }
    for(int i=0; i< N; i++) {
        if(dist[i] < 20000000) printf("%d\n",dist[i]);
        else if(dist[i] == 20000000) printf("INF\n");
    }

}