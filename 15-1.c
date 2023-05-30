#include <stdio.h>
#include <string.h>

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int grid[18][32];

void add_mine(int x, int y) {
    grid[y][x] = -1;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < 32 && ny >= 0 && ny < 18 && grid[ny][nx] != -1) {
            grid[ny][nx]++;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        memset(grid, 0, sizeof(grid));
        int K, M, N;
        scanf("%d%d%d", &K, &M, &N);
        for (int i = 0; i < K; i++) {
            int x, y;
            scanf("%d%d", &x, &y);
            add_mine(x, y);
        }
        printf("Case %d: %d mines of %dX%d\n", t, K, M, N);
        printf("+");
        for (int i = 0; i < N; i++) printf("-");
        printf("+\n");
        for (int i = 1; i <= M; i++) {
            printf("|");
            for (int j = 1; j <= N; j++) {
                if (grid[i][j] == -1) {
                    printf("*");
                } else if (grid[i][j] == 0) {
                    printf(" ");
                } else if (grid[i][j] <= 9) {
                    printf("%d", grid[i][j]);
                } else {
                    printf("%c", 'A' + grid[i][j] - 10);
                }
            }
            printf("|\n");
        }
        printf("+");
        for (int i = 0; i < N; i++) printf("-");
        printf("+\n");
    }
    return 0;
}
