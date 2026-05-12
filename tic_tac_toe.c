#include <stdio.h>

#define GRID_SIZE 3
char grid[GRID_SIZE][GRID_SIZE] = {
    {'-', '-', '-'},
    {'-', '-', '-'},
    {'-', '-', '-'}
};

// Changed char* to char
void set_symbol(int row, int col, char symbol) {
    // Check for both upper and lower bounds
    if (row >= 0 && row < GRID_SIZE && col >= 0 && col < GRID_SIZE) {
        grid[row][col] = symbol;
    } else {
        printf("Invalid position! Please use 0-2.\n");
    }
}

void print_grid() {
    printf("\n-- Grid --\n");
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("| %c ", grid[i][j]);
        }
        printf("|\n");
    }
    printf("----------\n");
}

int main() {
    int row, col;
    char symbol;

    while (1) {
        print_grid();
        printf("Enter symbol and position (e.g., X 1 2): ");
        
        // Removed the trailing \n
        if (scanf(" %c %d %d", &symbol, &row, &col) != 3) {
            printf("Invalid input format.\n");
            break; // Exit if input is mangled
        }

        set_symbol(row, col, symbol);
    }

    return 0;
}