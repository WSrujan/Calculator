#include <stdio.h>


void main()
{
    int num1, num2, sum, multiply, sub, div;
    char operate;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("Enter the operation sign:\n");
    scanf(" %c", &operate);
    
    switch(operate)
    {
        case '+':
                sum = num1 + num2;
                printf("Addition is %d", sum);
                break;
        case '-':
                sub = num1 - num2;
                printf("Substraction is %d", sub);
                break;
        case '/':
                div = num1 / num2;
                sub = num1 % num2;
                printf("Division is %d\nThe remainder is %d", div, sub);
                break;
        case '*':
                multiply = num1 * num2;
                printf("Multiplication is %d", multiply);
                break;
    }
}