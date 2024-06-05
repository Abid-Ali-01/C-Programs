#include<stdio.h>
int main (){
    int num = 10;
    int *ptr;
    ptr = &num;

printf("Number is %d\n", num);
printf("The address of Number %d is %p\n",num, ptr);
printf("The value stored at address %p is %d", ptr, *ptr);

}