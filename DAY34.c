\\Q67. Insert an element in an array at a given position.

  #include <stdio.h>

int main() {
    int n, i, pos, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n + 1]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


\\Q68. Delete an element from an array.

  #include <stdio.h>
int main() {
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
  printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
  printf("\n");
    return 0;
}
