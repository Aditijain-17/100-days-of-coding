\\Q77. Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool>
bool areDiagonalElementsDistinct(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int matrix[MAX][MAX];
    int n;
 printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   if (areDiagonalElementsDistinct(matrix, n)) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not all distinct.\n");
    }
    return 0;
}

\\Q78. Find the sum of main diagonal elements for a square matrix. 

  #include <stdio.h>
#define MAX 100
int main() {
    int matrix[MAX][MAX];
    int n, sum = 0;
  printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
   printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}

