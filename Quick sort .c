#include <stdio.h>
void Swap(int *x, int *y) 
{
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void quickSort(int a[], int first, int last) 
{
    int pivot, i, j;
    if(first < last) 
	{
        pivot = first;
        i = first;
        j = last;
        while (i < j) 
		{
            while(a[i] <= a[pivot] && i < last)
                i++;
            while(a[j] > a[pivot])
                j--;
            if(i < j) 
			{
                Swap(&a[i], &a[j]);
            }
        }
        Swap(&a[pivot], &a[j]);
        quickSort(a, first, j - 1);
        quickSort(a, j + 1, last);
    }
}
int main() 
{
    int a[100], number, i;
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
	quickSort(a, 0, number - 1);
    printf("\n quick Sort Result : ");
    for(i = 0; i < number; i++)  
	{
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}

OUTPUT:
Please Enter the total Number of Elements  :  7

 Please Enter the Array Elements  :
10 5 80 -2 15 23 45

 quick Sort Result :  -2         5       10      15      23      45      80

--------------------------------
Process exited after 22.21 seconds with return value 0
Press any key to continue . . .
