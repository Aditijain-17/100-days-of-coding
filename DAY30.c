\\Q59. Count even and odd numbers in an array.

  #include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);
   return 0;
}

\\Q60. Count positive, negative, and zero elements in an array.

  #include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Count based on value
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    printf("Positive elements = %d\n", positiveCount);
    printf("Negative elements = %d\n", negativeCount);
    printf("Zero elements     = %d\n", zeroCount);

    return 0;
}

