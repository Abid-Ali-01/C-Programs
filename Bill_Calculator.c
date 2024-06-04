#include <stdio.h>

int main() {
    int unit;
    int result=0;
    printf("Enter Units Consumed \n");
    scanf("%d", &unit);
 
 if(unit >= 1 && unit <= 100){
     result= unit * 20;
     printf("Your Bill Is %d", result);
 }
 
 else if (unit >100 && unit <= 200) {
     result= unit * 25;
     printf("Your Bill Is %d", result);

 }
  else if (unit >200 && unit <= 300) {
     result= unit * 30;
     printf("Your Bill Is %d", result);

 }
   else if (unit > 300) {
     result= unit * 30 + 2000;
     printf("Your Bill Is %d Including RS: 2000 Aditional Charges", result);

 }
 else{
     printf("Invalid Input. ");
 }
 
    return 0;
}