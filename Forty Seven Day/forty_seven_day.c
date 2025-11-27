//Wap to count island.
#include <stdio.h>

#define MAX 100

int n, m;
int grid[MAX][MAX];
int visited8[MAX][MAX];
int visited4[MAX][MAX];

// 8 directions
int row8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// 4 directions
int row4[] = {-1, 0, 0, 1};
int col4[] = {0, -1, 1, 0};

int isSafe8(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1 && !visited8[x][y]);
}

int isSafe4(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1 && !visited4[x][y]);
}

void DFS8(int x, int y) {
    visited8[x][y] = 1;
    for (int k = 0; k < 8; k++) {
        int newX = x + row8[k];
        int newY = y + col8[k];
        if (isSafe8(newX, newY))
            DFS8(newX, newY);
    }
}

void DFS4(int x, int y) {
    visited4[x][y] = 1;
    for (int k = 0; k < 4; k++) {
        int newX = x + row4[k];
        int newY = y + col4[k];
        if (isSafe4(newX, newY))
            DFS4(newX, newY);
    }
}

int main() {
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the grid (0 for water, 1 for land):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &grid[i][j]);

    int count8 = 0, count4 = 0;

    // Count 8-directional islands
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 1 && !visited8[i][j]) {
                DFS8(i, j);
                count8++;
            }

    // Count 4-directional islands
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 1 && !visited4[i][j]) {
                DFS4(i, j);
                count4++;
            }

    printf("Number of islands (8-directional): %d\n", count8);
    printf("Number of islands (4-directional): %d\n", count4);

    return 0;
}
