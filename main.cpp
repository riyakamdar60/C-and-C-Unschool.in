#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("Sum of %d+%d+%d is %d", a, b, c, sum);
    return 0;
}
