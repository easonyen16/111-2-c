#include <stdio.h>

main(){
    int cases, t;
    scanf("%d", &cases);
    for(t = 1; t <= cases; ++t){
        printf("Case %d:\n", t);
        
        // start here
        int mines, M, N, x, y;
        int grid[18][32] = {0}; // 18x32 grid with extra boundary

        scanf("%d %d %d", &mines, &M, &N); // read the number of mines, M, N
        for(int k = 0; k < mines; k++) {
            scanf("%d %d", &x, &y); // read the coordinates of the mines
            grid[y][x] = -1; // mark the mine
            for(int dx = -1; dx <= 1; dx++)
                for(int dy = -1; dy <= 1; dy++)
                    if((x+dx) > 0 && (x+dx) <= N && (y+dy) > 0 && (y+dy) <= M && grid[y+dy][x+dx] != -1)
                        grid[y+dy][x+dx]++;
        }

        // output the minefield
        for(int i = 1; i <= M; i++) {
            for(int j = 1; j <= N; j++)
                if(grid[i][j] == -1) // if it's a mine
                    printf("*");
                else // otherwise print the number of mines around
                    printf("%d", grid[i][j]);
            printf("\n");
        }
    }
}
