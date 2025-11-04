\\Q118. Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n (array will contain n elements from 0 to n with one missing): ");
    scanf("%d", &n);
  int arr[n];
    int actual_sum = 0;
  printf("Enter %d elements (from 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }
    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing);

    return 0;
}
