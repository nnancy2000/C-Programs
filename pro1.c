#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
 char str[10];
 int alpha, digit, spcl, i;
 alpha = digit = spcl = i = 0;
 
 printf("enter the string : ");
 gets(str);

 while(str[i]!='\0')
 {
 if((str[i]>='a' && str[i]<='z') || (str[i]>='A' &&
str[i]<='Z'))
 {
 alpha++;
 }
 else if(str[i]>='0' && str[i]<='9')
 {
 digit++;
 }
 else
 {
 spcl++;
 }
 i++;
 }
 printf("Number of Alphabets in the string is : %d\n", alpha);
 printf("Number of Digits in the string is : %d\n", digit);
 printf("Number of Special characters in the string is : %d\n\n",
spcl);

return 0;
}

