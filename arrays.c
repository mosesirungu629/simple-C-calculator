#include <stdio.h>

int main() {
    int array[10];
    int i, j, temp, omittedIndex, deletedIndex;

    // Initialize array in ascending order from 10 to 20
    for (i = 0; i < 10; i++) {
        array[i] = 10 + i;
    }

    // Print the original array
    printf("Original Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Omit a number in the center
    omittedIndex = 4; 
    // Assuming the center index, you can change it based on your requirements
    printf("Omitted Number: %d\n", array[omittedIndex]);
    for (i = omittedIndex; i < 9; i++) {
        array[i] = array[i + 1];
    }

    // Print the array after omitting the number
    printf("Array after omitting: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Insert the omitted number
    array[9] = array[omittedIndex] -1;
 


    // Print the array after inserting the omitted number
  
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap if the current element is greater than the next one
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
      printf("Array after inserting: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
     printf("\n");

    // Delete the omitted number
    
    omittedIndex = 4; 
    // Assuming the center index, you can change it based on your requirements
    for (i = omittedIndex; i < 9; i++) {
        array[i] = array[i + 1];
    }

    // Print the array after omitting the number
    printf("Array after deleting: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
