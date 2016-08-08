#include <algorithm>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> PAIR;
const int INF = 2000000;
vector<PAIR> Graph[1000];
bool selected[1000];
vector<int>dist(1000);
int vertex, edge;
int sum = 0;

void prim() {
    int cnt = vertex - 1;

    dist.assign(vertex,INF);
    priority_queue<PAIR, vector<PAIR>, greater<PAIR> > PQ;

    dist[0] = 0;
    selected[0] = true;
    PQ.emplace(-1, 0);

    while (cnt != 0) {
        PAIR t = PQ.top();
        PQ.pop();
        int here = t.second;

        if (t.first != -1) {
            if (selected[here]) continue;

            sum += t.first;

            selected[here] = true;
            cnt--;
        }

        for (auto i : Graph[here]) {
            int there = i.second;
            int weight = i.first;

            if (!selected[there] && dist[there] > weight) {
                dist[there] = weight;

                PQ.emplace(weight, there);
            }
        }
    }


}
void output(){
    printf("%d",sum);
}

int main() {
    int a, b, c;
    scanf("%d %d", &vertex, &edge);

    for (int i = 0; i < edge; i++) {
        scanf("%d %d %d", &a, &b, &c);
        a--, b--;
        Graph[a].emplace_back(c, b);
        Graph[b].emplace_back(c, a);
    }
    prim();
    output();
}