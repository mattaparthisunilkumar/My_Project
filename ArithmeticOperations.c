#include <stdio.h>
#include "ArithmeticOperations.h"

int c = 50000; // local to file

//static int mul(int a, int b); // basic multiplication function

int add(int a, int b) // basic add function
{
    //mul(a,b);
    //printf("enter the c value to modify");
    //scanf("%d", &c);

    return a + b;

}


int mul(int a, int b) // basic multiplication function
{
    return a * b;
}


int sub(int a, int b) // basic subtraction function
{
    return a - b;
}


float div(int a, int b) // basic division function
{
    return (float)a/b;
}

