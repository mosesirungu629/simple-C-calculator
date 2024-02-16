//ENE212-0164/2021 MOSES IRUNGU
#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("Fibonacci Series: ");

    // loop until the next term is greater than n
    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
