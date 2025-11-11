\\Q129. A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

  #include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "numbers.txt";
    int num, sum = 0, count = 0;
    double average;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(file);
  if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    return 0;
}
