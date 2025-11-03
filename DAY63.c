\\Q113. Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
  int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value of k: ");
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("Invalid value of k\n");
        return 1;
    }
    selectionSort(arr, n);
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
