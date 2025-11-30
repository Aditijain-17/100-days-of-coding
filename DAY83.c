\\Q133. Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int getDays(enum Month month) {
    switch (month) {
        case JANUARY:   return 31;
        case FEBRUARY:  return 28; 
        case MARCH:     return 31;
        case APRIL:     return 30;
        case MAY:       return 31;
        case JUNE:      return 30;
        case JULY:      return 31;
        case AUGUST:    return 31;
        case SEPTEMBER: return 30;
        case OCTOBER:   return 31;
        case NOVEMBER:  return 30;
        case DECEMBER:  return 31;
        default:        return 0;
    }
}
int main() {
    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        printf("Month %d has %d days\n", m, getDays(m));
    }
    return 0;
}
