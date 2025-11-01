\\Q65. Search in a sorted array using binary search.

  #include <stdio.h>
  int main() {
    int n, i, key, low, high, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
      if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }    printf("Element %d not found in the array.\n", key);
    return 0;
}

\\Q66. Insert an element in a sorted array at the appropriate position.

  #include <stdio.h>

int main() {
    int n, i, key, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
int arr[n + 1]; 
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (key < arr[i]) {
            break;
        }
    }
    pos = i;
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

   printf("\n");
    return 0;
}
