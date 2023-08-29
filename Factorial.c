#include<stdio.h>
int main()
{
   int i, n;
   long int fact = 1;
   printf("Enter the number: ");
   scanf("%d" , &n);
   for(i = 1; i <= n; i++)
   {
       fact = fact * i;
   }
   printf("Factorial of %d is %ld", n , fact);
}

OUTPUT:
Enter the number: 4
Factorial of 4 is 24
--------------------------------
Process exited after 2.192 seconds with return value 20
Press any key to continue . . .
