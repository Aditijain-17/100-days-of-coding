\\Q97. Print the initials of a name.

  #include <stdio.h>
int main() {
    char name[100];
    int i = 0;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ' && name[0] != '\n') {
        printf("Initials: %c", name[0]);
    }
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
        i++;
    }
   printf("\n");
    return 0;
}

\\Q98. Print initials of a name with the surname displayed in full.

  #include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i = 0, start = 0;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Formatted name: ");
    while (name[i] != '\0') {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", name[i]);
        } else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            int temp = i + 1;
            int spaceFound = 0;
            while (name[temp] != '\0') {
                if (name[temp] == ' ') {
                    spaceFound = 1;
                    break;
                }
                temp++;
            }
      if (spaceFound) {
                printf("%c. ", name[i + 1]);
            } else {
                printf("%s", &name[i + 1]);
                break;
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}

