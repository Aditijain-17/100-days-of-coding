\\Q61. Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &KEY);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
            found = 1;
            break;
        }
    }
  if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
  return 0;
}

\\Q62. Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    int n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

