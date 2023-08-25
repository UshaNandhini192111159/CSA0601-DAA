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
Enter the number: 6
Factorial of 6 is 720
--------------------------------
Process exited after 2.102 seconds with return value 21
Press any key to continue . . .
