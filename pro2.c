#include<stdio.h>
// function prototype, also called function declaration
void swap(int a, int b);
int main()
{
 int m = 23, n = 18;
 
 printf("The values before swap m = %d \nand n = %d", m, n);
 swap(m, n);
}
void swap(int a, int b)
{
 a=a+b;
 b=a-b;
 a=a-b;
 printf(" \nThe values after swap m = %d\n and n = %d", a, b);
}
