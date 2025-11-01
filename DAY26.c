\\Q51. Write a program to print the following pattern:
    5
   45
  345
 2345
12345

  #include <stdio.h>
  int main() {
    int i, j, space;
    for (i = 5; i >= 1; i--) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
return 0;
}

\\Q52. Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


  #include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
printf("\n");
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
printf("\n");
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
 printf("\n");
    printf("*\n");
return 0;
}

