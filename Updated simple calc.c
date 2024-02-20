//ENE212-0164/2021 //MOSES IRUNGU
#include <stdio.h>

int main() {
    int num1, num2, sum, diff, product, quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("summation: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("product: %d\n", product);
    printf("quotient: %d\n", quotient);
    printf("The summation and difference are %d and %d respectively\n", sum, diff);
    printf("The product and quotient are %d and %d respectively\n", product, quotient);
    
    return 0;
}
