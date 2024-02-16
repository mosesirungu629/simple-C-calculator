//ENE212-0164/2021 MOSES IRUNGU
#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        sum += pow(n % 10, (int)log10(n) + 1);
        num /= 10;
    }
    return sum;
}

int isArmstrong(int n) {
    return num == countOfDigits(n);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
