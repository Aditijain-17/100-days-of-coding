\\Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.

  #include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    char day[3], month[3], year[5];
  printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
   strncpy(year, date + 6, 4);
    year[4] = '\0';
    if (strcmp(month, "04") == 0) {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    } else {
        printf("Month is not 04. No formatting applied.\n");
    }
  return 0;
}

\\Q100. Print all sub-strings of a string.

  #include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i, j, k;
   printf("Enter a string: ");
    fgets(str, sizeof(str), stdin)
    str[strcspn(str, "\n")] = '\0';
  len = strlen(str);
   printf("All substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

