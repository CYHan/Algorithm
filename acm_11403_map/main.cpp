
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

int main() {
    map<int, int> map;


    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);

        map[t]++;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int t;
        scanf("%d", &t);

        printf("%d ", map[t]);
    }
}