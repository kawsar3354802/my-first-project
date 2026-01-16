

#include <stdio.h>
void plus(float a, float b);
void minus(float a, float b);
void multiply(float a, float b);
void division(float a, float b);
void error();
int main()
{
    float a, b;
    int operations;
    printf("enter the value of a\n");
    scanf("%f", &a);
    printf("enter the value of b\n");
    scanf("%f", &b);
    printf("enter the operations\n 1 press for add\n 2 press for different \n 3 press for multiply \n 4 press for division but you need to get a/b conditions is 0<b other wise error operations \n");
    scanf("%d", &operations);
    switch (operations)
    {
    case 1:
        plus(a, b);
        break;
    case 2:
        minus(a, b);
        break;
    case 3:
        multiply(a, b);
        break;
    case 4:
        if (0 < b)
        {
            division(a, b);
        }
        else
        {
            printf("fill the conditions for number 4");
        }
        break;
    default:
        error();
        break;
    }
    return 0;
}
void plus(float a, float b)
{
    printf("sum=%f \n", a + b);
}
void minus(float a, float b)
{
    printf("differanc=%f\n", a - b);
}
void multiply(float a, float b)
{
    printf("multiply=%f \n", a * b);
}
void division(float a, float b)
{
    printf("divide result=%f \n");
}
void error()
{
    printf("invalid operations");
}
