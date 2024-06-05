#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;      // Pointer to an integer
    int **ptr_to_ptr = &ptr; // Pointer to a pointer to an integer

    // Display the value and the addresses
    printf("Value: %d\n", value);
    printf("Address of value: %p\n", &value);

    printf("Pointer ptr points to value: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);

    printf("Pointer to pointer ptr_to_ptr points to ptr which points to value: %d\n", **ptr_to_ptr);
    printf("Address stored in ptr_to_ptr: %p\n", ptr_to_ptr);
    printf("Address of ptr_to_ptr: %p\n", &ptr_to_ptr);

    return 0;
}
