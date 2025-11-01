\\Q9. Write a program to calculate simple and compound interest for given principal, rate, and time.

  #include <stdio.h>
#include <math.h>  // Required for the pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &rate);
 printf("Enter Time (in years): ");
    scanf("%f", &time)
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
 return 0;
}

\\Q10. Write a program to input time in seconds and convert it to hours:minutes:seconds format.

  #include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("Time in HH:MM:SS format = %02d:%02d:%02d\n", hours, minutes, seconds);
 return 0;
}

