#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
int add();
int sub();
int mupl();
int division();
int fact();
int cube();
int squre();
int squreroot();
int modulo();
int power();

int main()
{
    system("tittle  madmrid");
    system("color 2c");
    int choice;
    while (1)
    {
        printf("******/  CALUCULATOR   /******");
        printf("Enter your choice out of this\n");
        printf("Enter 0 to exit\n");
        printf("1. FOR ADDITION\n");
        printf("2.FOR SUBSTRACTION\n");
        printf("3.FOR MULTIPLICATION\n");
        printf("4.FOR DIVISION\n");
        printf("5.FOR FACTORIAL\n ");
        printf("6.FOR CUBE\n");
        printf("7.FOR SQUARE\n");
        printf("8.FOR SQUAREROOT\n");
        printf("9. FOR MODOULO\n");
        printf("10.FOR POWER\n");
        scanf("%d", &choice);
        if (choice != 0)
        {
            switch (choice)
            {
            case 1:
                add();
                break;
                return 1;
            case 2:
                sub();
                break;
                return 1;
            case 3:
                mupl();
                break;
                return 1;
            case 4:
                division();
                break;
                return 1;
            case 5:
                fact();
                break;
                return 1;
            case 6:
                cube();
                break;
                return 1;
            case 7:
                squre();
                break;
                return 1;
            case 8:
                squreroot();
                break;
                return 1;
            case 9:
                modulo();
                break;
                return 1;
            case 10:
                power();
                break;
                return 1;
            default:
                printf("this is an invalid option\n");
                return 1;
            }
        }
        else
            getchar();
        exit(0);
    }

    return 0;
}
int add()
{
    int a, b;
    printf("Enter the values to add\n");
    scanf("%d%d", &a, &b);
    printf("The SUM of a&b is %d", a + b);
    return 1;
}
int sub()
{
    int a, b;
    printf("Enter the values to substract\n");
    scanf("%d%d", &a, &b);
    printf("The DIFFERANCE of a&b is %d", a - b);
    return 1;
}
int mupl()
{

    int a, b;
    printf("Enter the values to multiply\n");
    scanf("%d%d", &a, &b);
    printf("The PRODUCT of a&b is %d", a * b);
    return 1;
}
int division()
{
    int a, b;
    printf("Enter the values to divide\n");
    scanf("%d%d", &a, &b);
    printf("The qosient of a&b is %d", a / b);
    return 1;
}
int fact()
{
    int a, fac;
    printf("Enter the value of number\n");
    scanf("%d", &a);
    fac = 1;
    for (int i = 0; i <= a; i++)
    {
        fac = fac * i;
    }
    printf("The FACTORIAL of %d is %d", a, fac);
    return 1;
}
int cube()
{
    double a, cub = 0;
    printf("Enter the value of number\n");
    scanf("%ld", &a);
    cub = pow(a, 3);
    printf("The cube of a is %ld", cub);
    return 1;
}
int squre()
{

    double a, cub = 0;
    printf("Enter the value of number\n");
    scanf("%ld", &a);
    cub = pow(a, 2);
    printf("The SQAURE of a is %ld", cub);
    return 1;
}
int squreroot()
{

    double a, cub = 0;
    printf("Enter the value of number\n");
    scanf("%ld", &a);
    cub = sqrt(a);
    printf("The SQAUREROOT of a is %ld", cub);
    return 1;
}
int modulo()
{
    int a, b;
    printf("Enter the values to divide\n");
    scanf("%d%d", &a, &b);
    printf("The  of a&b REMINDER is %d", a % b);
    return 1;
}
int power()
{
    double a, b, cub = 0;
    printf("Enter the value of numbers\n");
    scanf("%ld%ld", &a, &b);
    cub = pow(a, b);
    printf("The POWER of a to b is %ld", cub);
    return 1;
}