#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
    int value;
};

bool cmp(const Point &first, const Point &second) {
    return first.value < second.value;
}

int n;
Point input[510 * 510];
int map[510][510];
int dp[510][510];
int ans;

void print()
{
    int i, j;

    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;
    int dy[4] = { -1, 0, 0, 1 };
    int dx[4] = { 0, -1, 1, 0 };
    int nexty, nextx;
    Point current;
    int max;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &map[i][j]);
            input[i * n + j].y = i;
            input[i * n + j].x = j;
            input[i * n + j].value = map[i][j];
        }
    }

    sort(input, input + n * n, cmp);

    for (i = 0; i < n * n; i++) {
        max = 0;
        current = input[i];
        for (j = 0; j < 4; j++)    {
            nexty = current.y + dy[j];
            nextx = current.x + dx[j];

            if (nexty >= 0 && nexty < n && nextx >= 0 && nextx < n) {
                if (map[nexty][nextx] < map[current.y][current.x]) {
                    if (dp[nexty][nextx] > max)    max = dp[nexty][nextx];
                }
            }
        }

        dp[current.y][current.x] = max + 1;

        if (dp[current.y][current.x] > ans)    ans = dp[current.y][current.x];
    }

    printf("%d\n", ans);

    return 0;
}
