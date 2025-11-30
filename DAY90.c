\\Q140. Define a struct with enum Gender and print person's gender.

  #include <stdio.h>
enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    enum Gender gender;
};

void printGender(struct Person p) {
    switch (p.gender) {
        case MALE:
            printf("%s is Male\n", p.name);
            break;
        case FEMALE:
            printf("%s is Female\n", p.name);
            break;
        case OTHER:
            printf("%s is Other\n", p.name);
            break;
        default:
            printf("Unknown gender for %s\n", p.name);
    }
}

int main() {
    struct Person p1 = {"Alice", FEMALE};
    struct Person p2 = {"Bob", MALE};
    struct Person p3 = {"Charlie", OTHER};

    printGender(p1);
    printGender(p2);
    printGender(p3);

    return 0;
}
