#include <stdio.h>
int main() 
{
   int arr[10];
   int i, j, position, swap,n;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   for ( i = 0; i < n; i++) 
   {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
   }
   for (i = 0; i < (n - 1); i++) 
   {
      position = i;
      for (j = i + 1; j < n; j++) 
      {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) 
      {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}

OUTPUT:
Enter the number of elements: 7
Enter number1: 10
Enter number2: 5
Enter number3: 80
Enter number4: -2
Enter number5: 15
Enter number6: 23
Enter number7: 45
-2      5       10      15      23      45      80
--------------------------------
Process exited after 19.76 seconds with return value 0
Press any key to continue . . .
