#include <stdio.h>

#define MAX_X 5
#define MAX_Y 5

int blob_count(int x, int y, int grid[MAX_X][MAX_Y]);
void copy_grid(int from_grid[5][5], int to_grid[MAX_X][MAX_Y]);

int main(void) {
    int x, y;
    int grid_original[MAX_X][MAX_Y] = {
            {1, 1, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 0, 1},
            {0, 1, 0, 1, 1},
    },
            grid[MAX_X][MAX_Y];

    do{
        printf("Enter x and y (a negative x or y terminates): ");
        scanf("%d %d", &x, &y);

        copy_grid(grid_original, grid);

        if (x >= 0 && y >= 0)
            printf("blob check af (%d,%d): %d\n", x, y, blob_count(x,y,grid));
    }  while (x >= 0 && y >= 0);

    return 0;
}

int blob_count(int x, int y, int grid[MAX_X][MAX_Y]){
    if (x < 0 || y < 0 || x > MAX_X - 1 || y > MAX_Y - 1)
        return 0;
    else if (grid[x][y] == 1){
        int sum, dx, dy;

        grid[x][y] = 0;    // Reset cell, in order not to count again
        sum = 1;           // Now counted.

        for(dx = -1; dx <= 1; dx++)
            for(dy = -1; dy <= 1; dy++)
                sum += blob_count(x + dx, y + dy, grid);

        return sum;
    }
    else //  grid[x][y] == 0
        return 0;
}

void copy_grid(int from_grid[MAX_X][MAX_Y], int to_grid[MAX_X][MAX_Y]){
    int x, y;

    for(x = 0; x < MAX_X; x++)
        for(y = 0; y < MAX_Y; y++)
            to_grid[x][y] = from_grid[x][y];
}
