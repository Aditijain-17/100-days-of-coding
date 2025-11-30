\\Q148. Take two structs as input and check if they are identical.

  #include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1; // identical
    }
    return 0;
}

int main() {
    struct Student s1, s2;
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%49s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%49s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);
    if (areIdentical(s1, s2)) {
        printf("\nThe two students are IDENTICAL.\n");
    } else {
        printf("\nThe two students are DIFFERENT.\n");
    }

    return 0;
}
