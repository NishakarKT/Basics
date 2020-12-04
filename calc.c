#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    int z;

choose:

    printf("Choose an Option : \n1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n0 = Exit\n");
    scanf("%d", &z);

    if (z == 0)
    {
        system("PAUSE");
        exit(0);
    }

    printf("Enter Number 1 : ");
    scanf("%lf", &num1);

    printf("Enter Number 2 : ");
    scanf("%lf", &num2);

    switch (z)
    {
    case 1:
        printf("%0.4lf + %0.4lf = %0.4lf\n", num1, num2, num1 + num2);
        break;

    case 2:
        printf("%0.4lf - %0.4lf = %0.4lf\n", num1, num2, num1 - num2);
        break;

    case 3:
        printf("%0.4lf * %0.4lf = %0.4lf\n", num1, num2, num1 * num2);
        break;

    case 4:
        printf("%0.4lf / %0.4lf = %0.4lf\n", num1, num2, (num1) / num2);
        break;

    default:
        goto choose;
    }

    goto choose;

    return 0;
}