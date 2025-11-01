\\Q69. Find the second largest element in an array.

  #include <stdio.h>

int main() {
    int n, i;
    int largest, secondLargest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}

\\Q70. Rotate an array to the right by k positions.


  #include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    k = k % n;
    int temp[n];
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
  return 0;
}

