\\Q134. Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

  #include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void printMessage(enum Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;
        default:
            printf("Unknown status.\n");
    }
}

int main() {
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    printMessage(s1);
    printMessage(s2);
    printMessage(s3);

    return 0;
}
