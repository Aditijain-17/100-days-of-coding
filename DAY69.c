\\Q119. Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

  #include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (only one element will be repeated):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            break;
        }
        visited[arr[i]] = 1;
    }

    return 0;
}
