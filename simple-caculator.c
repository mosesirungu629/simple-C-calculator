//MOSES IRUNGU
//ENE212-0164/2021

#include <stdio.h>

int main() {
    int num1, num2, sum, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff= num1 - num2;

    printf("summation: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("The summation and difference are %d\n and %d\n respectively",sum,diff);
    
    return 0;
}
