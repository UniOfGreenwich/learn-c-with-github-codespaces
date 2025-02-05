/*
 * In C, variables store values, but sometimes we need to:
 *  - **Directly access memory**: Instead of just working with values, 
 *      pointers allow us to work with addresses.
 *      
 *  - **Efficiently modify data**: Passing large structures to 
 *      functions by pointer avoids making copies.
 *
 *  - **Work with dynamic memory**: Pointers are essential for 
 *      allocating memory at runtime (malloc/free).
 *
 *  - **Interact with hardware**: Low-level programming 
 *      (e.g., embedded systems, OS development) relies on pointers.
 *
 */

#include <stdio.h>
#include <assert.h>

// ❌ I AM NOT DONE

int main() {
    int x = 42;  
    
    // TODO: Assign ptr the address of x
    int *ptr = NULL;  

    // Assertions to check correctness
    assert(ptr != NULL);  // Pointer should not be NULL
    assert(ptr == &x);    // Pointer should store the address of x
    assert(*ptr == 42);   // Dereferencing ptr should give the value of x

    printf("All assertions passed!\n");

    // TODO: Modify x using the pointer to hold the value 99

    // Assertions to check the modification
    assert(x == 99);    // x should now be updated
    assert(*ptr == 99); // Dereferencing should reflect the new value

    printf("Pointer manipulation successful!\n");

    return 0;
}
