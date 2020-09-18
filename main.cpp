#include<stdio.h>
int main()
{
    int a, b, sum, sub, mul, div, mod;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of %d and %d is %d ", a, b, sum);
    sub = a - b;
    printf("\nDifference of %d and %d is %d ", a, b, sub);
    mul = a * b;
    printf("\nProduct of %d and %d is %d ", a, b, mul);
    div = a / b;
    printf("\nOn dividing %d by %d quotient is %d ", a, b, div);
    mod = a % b;
    printf("\nOn dividing %d by %d remainder is %d ", a, b, mod);
    return 0;
}
