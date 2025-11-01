\\Q63. Merge two arrays.

  #include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
  printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
 printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged[n1 + n2];
  for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
 printf("\n");
    return 0;
}

\\Q64. Find the digit that occurs the most times in an integer number.

  #include <stdio.h>
int main() {
    long long num;
    int digitCount[10] = {0}; // Array to store frequency of digits 0–9
    int i, maxDigit = 0;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }
    for (i = 1; i < 10; i++) {
        if (digitCount[i] > digitCount[maxDigit]) {
            maxDigit = i;
        }
    }
    printf("The digit that occurs most frequently is: %d\n", maxDigit);
return 0;
}
