#include <stdio.h>

#define GRID_SIZE 3
char* grid[GRID_SIZE][GRID_SIZE] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void set_symbol(int row, int col, char* symbol) {
    if (row <= 2 && col <=2) {
        grid[row][col] = symbol;
    };
}

void print_grid() {
    for (int i=0; i<GRID_SIZE; i++) {
        for (int j = 0;j<GRID_SIZE; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    };

}

int main() {

    print_grid();
    set_symbol(0, 0, "X");
    print_grid();

    return 0;
}
