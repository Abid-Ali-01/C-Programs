#include <stdio.h>

int main() {
   int num = 20;
  int  *ptr = &num; //pointer to the num
   int **ptr2 = &ptr; // pointer to the pointer "ptr"

   printf("The Value is %d \n", num); // prints value in "num"
   printf("The address of value is %p\n", &num); // prints value of "num"

   printf("The *ptr hold the value %d \n", *ptr); //Value stored in "ptr"
   printf("Address of ptr is %p\n", *ptr); //Address of ptr
   printf("Address stored in ptr is %p\n", ptr); //Address stored in "ptr" same as address of "num"

   // Accessing value with the help of pointer to the pointer "**ptr2"
   //It prints "num", because **ptr holds address of *ptr, and "*ptr" holds the address of "num"
   printf("Pointer to the pointer **ptr2 points to the *ptr which holds the value %d\n", **ptr2);

  //Prints address stored "*ptr", that is actually address of "num" in stored in "*ptr"
   printf("Address stored in **ptr2  is %p\n", *ptr2);
   
   //Prints the address of "**ptr2"
   printf("Address of ptr2 is %p\n", &ptr2);
    return 0;
}
