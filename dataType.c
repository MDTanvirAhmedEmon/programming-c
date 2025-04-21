#include <stdio.h>
 int main () {
   int myNum = 5;             // Integer (whole number)
   float myFloatNum = 5.99;   // Floating point number
   char myLetter = 'D';       // Character
   
   printf("%d\n", myNum);
   printf("%f\n", myFloatNum);
   printf("%c\n", myLetter);

    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("the sum is %d\n",  sum);

    return 0;
 }