\\Q112. Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

  #include <stdio.h>
int maxSubarraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
  for (int i = 1; i < n; i++) {
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : current_max + arr[i];
        max_so_far = (max_so_far > current_max) ? max_so_far : current_max;
    }
  return max_so_far;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = maxSubarraySum(arr, n);
    printf("Maximum contiguous subarray sum is: %d\n", max_sum);

    return 0;
}
