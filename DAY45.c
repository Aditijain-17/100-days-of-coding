\\Q89. Count frequency of a given character in a string.

  #include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
   printf("Enter the character to count: ");
    scanf("%c", &ch);
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
  printf("Character '%c' occurs %d time(s) in the string.\n", ch, count);
    return 0;
}

\\Q90. Toggle case of each character in a string.

  #include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  
        }
        i++;
    }
  printf("Toggled case string: %s\n", str);
    return 0;
}

