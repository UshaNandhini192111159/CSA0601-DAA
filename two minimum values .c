#include <stdio.h>
#include <limits.h>
void findFirstTwoMin(int arr[], int size) 
{
    int min1 = INT_MAX, min2 = INT_MAX,i;
    for (i = 0; i < size; i++)
	 {
        if (arr[i] < min1) 
		{
            min2 = min1;
            min1 = arr[i];
        } 
		else if (arr[i] < min2 && arr[i] != min1) 
		{
            min2 = arr[i];
        }
    }
    printf("First two minimum values: (%d, %d)\n", min1, min2);
}
int main() 
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    findFirstTwoMin(arr, n);
    return 0;
}

OUTPUT:
Enter the number of elements: 7
Enter 7 elements:
3
5
-4
1
8
2
0
First two minimum values: (-4, 0)

--------------------------------
Process exited after 13.07 seconds with return value 0
Press any key to continue . . .
