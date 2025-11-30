\\Q17. Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

void displayMessage(enum Role r) {
    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! You can browse with restricted access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}

int main() {
    enum Role r1 = ADMIN;
    enum Role r2 = USER;
    enum Role r3 = GUEST;

    displayMessage(r1);
    displayMessage(r2);
    displayMessage(r3);

    return 0;
}
