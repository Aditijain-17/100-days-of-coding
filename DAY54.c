\\Q104. Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

  #include <stdio.h>
#include <math.h>
int findPivot(int n) {
    int totalSum = n * (n + 1) / 2;
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - (x - 1) * x / 2;
      if (leftSum == rightSum) {
            return x;
        }
    }
    return -1;  
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. n must be positive.\n");
        return 1;
    }
    int pivot = findPivot(n);
    printf("Pivot integer: %d\n", pivot);
    return 0;
}
