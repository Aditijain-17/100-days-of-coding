\\Q138. Print all enum names and integer values using a loop.

  #include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main() {
    const char *statusNames[] = { "SUCCESS", "FAILURE", "TIMEOUT" };
    enum Status statusValues[] = { SUCCESS, FAILURE, TIMEOUT };

    int count = sizeof(statusValues) / sizeof(statusValues[0]);

    for (int i = 0; i < count; i++) {
        printf("%s = %d\n", statusNames[i], statusValues[i]);
    }

    return 0;
}
