#include <stdio.h>

int main() {
    int units;
    int rate1 = 20, rate2 = 25, rate3 = 30;
    int additionalCost = 2000;
    int totalCost = 0;

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 100 ) {        
        totalCost = units * rate1;
    } 

    else if (units >= 101 && units<=200) {
        totalCost = (100 * rate1) + ((units - 100) * rate2);
    } 
    
    else if (units >=201 && units <=300) {
        totalCost = (100 * rate1) + (100 * rate2) + ((units - 200) * rate3);
    } 
    
    else if (units > 300) {
        totalCost = (100 * rate1) + (100 * rate2) + (100 * rate3)  + additionalCost;
    }

    printf("You Bill Is :  %d\n", totalCost);

    return 0;
}
