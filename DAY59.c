\\Q109. Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

  #include <stdio.h>
int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
   int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
   if (k > n || k <= 0) {
        printf("Invalid value of k. It should be between 1 and %d.\n", n);
        return 1;
    }
    int maxSum = -2147483648; // Minimum 32-bit integer
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);
    return 0;
}
