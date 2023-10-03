// I will first put an addition operator
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;

    printf("Input 2 numbers: ");
    scanf("%d %d", &num1 , &num2);

    sum = num1+num2;
    printf("The answer is: %d", sum);
    return 0;
}