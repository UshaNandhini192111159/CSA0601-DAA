#include <stdio.h>
int main() 
{
  int rows, i, j, k;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; i++)
   {
    for (j = rows - i; j >= 1; j--)
	 {
      printf(" ");
    }
    for (k = 1; k <= i; k++) 
	{
      printf("%d ", k);
    }
    printf("\n");
  }
  return 0;
}

OUTPUT:
Enter the number of rows: 5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

--------------------------------
Process exited after 3.609 seconds with return value 0
Press any key to continue . . .
