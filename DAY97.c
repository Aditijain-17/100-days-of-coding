\\Q147. Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp_write, emp_read;
    FILE *fp;
    printf("Enter employee name: ");
    scanf("%49s", emp_write.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter salary: ");
    scanf("%f", &emp_write.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp_write.joining_date.day,
                      &emp_write.joining_date.month,
                      &emp_write.joining_date.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n--- Employee Details (Read from File) ---\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joining_date.day,
           emp_read.joining_date.month,
           emp_read.joining_date.year);

    return 0;
}
