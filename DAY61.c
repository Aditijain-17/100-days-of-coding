\\Q111. Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

  #include <stdio.h>
void firstNegativeInWindow(int arr[], int n, int k) {
    int i = 0, j = 0;
    int negatives[n], negIndex = 0;
 while (j < n) {
      
        if (arr[j] < 0)
            negatives[negIndex++] = j;
        if (j - i + 1 == k) {
      
            while (negIndex > 0 && negatives[0] < i) {
                for (int x = 0; x < negIndex - 1; x++)
                    negatives[x] = negatives[x + 1];
                negIndex--;
            }
            if (negIndex > 0)
                printf("%d ", arr[negatives[0]]);
            else
                printf("0 ");

            i++;
        }
        j++;
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

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("First negative integers in each window of size %d:\n", k);
    firstNegativeInWindow(arr, n, k);

    return 0;
}
