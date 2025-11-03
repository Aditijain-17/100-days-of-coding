\\Q79. Perform diagonal traversal of a matrix.

  #include <stdio.h>
#define ROWS 4
#define COLS 4

void diagonalTraversal(int matrix[ROWS][COLS], int rows, int cols) {
    for (int k = 0; k < rows; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    for (int k = 1; k < cols; k++) {
        int i = rows - 1, j = k;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
}
int main() {
    int matrix[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
  printf("Diagonal Traversal of the matrix:\n");
    diagonalTraversal(matrix, ROWS, COLS);
    return 0;
}

\\Q80. Multiply two matrices. 

  #include <stdio.h>
#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2
int main() {
    int A[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[ROW2][COL2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int result[ROW1][COL2];
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            for (int k = 0; k < COL1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

