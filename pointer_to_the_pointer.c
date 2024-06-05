#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num;      // Pointer to the num
    int **ptr2 = &ptr;    // Pointer to the pointer "ptr"

    printf("The value is %d \n", num);                    // Prints value in "num"
    printf("The address of value is %p\n", &num);  // Prints address of "num"

    printf("The *ptr holds the value %d \n", *ptr);       // Value stored at the address in "ptr" (value of "num")
    printf("Address stored in ptr is %p\n",ptr);  // Address stored in "ptr" (address of "num")
    printf("Address of ptr is %p\n", ptr);        // Address of "ptr"

    // Accessing value with the help of pointer to the pointer "**ptr2"
    // It prints "num", because **ptr2 holds address of *ptr, and "*ptr" holds the address of "num"
    printf("Pointer to the pointer **ptr2 points to the *ptr which holds the value %d\n", **ptr2);

    // Prints address stored in "*ptr2", which is the address of "ptr"
    printf("Address stored in *ptr2 is %p\n",*ptr2);

    // Prints the address of "ptr2"
    printf("Address of ptr2 is %p\n",ptr2);

    return 0;
}
