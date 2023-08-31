#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute(int arr[], int left, int right) 
{
	int i;
    if (left == right) 
	{
        for (i = 0; i <= right; i++) 
		{
            printf("%d", arr[i]);
            if (i != right) 
			{
                printf(", ");
            }
        }
        printf("\n");
    } 
	else 
	{
        for (i = left; i <= right; i++)
		 {
            swap(&arr[left], &arr[i]);
            permute(arr, left + 1, right);
            swap(&arr[left], &arr[i]);
        }
    }
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
    printf("All possible permutations:\n");
    permute(arr, 0, n - 1);
    return 0;
}

OUTPUT:
Enter the number of elements: 3
Enter 3 elements:
1
2
3
All possible permutations:
1, 2, 3
1, 3, 2
2, 1, 3
2, 3, 1
3, 2, 1
3, 1, 2

--------------------------------
Process exited after 11.26 seconds with return value 0
Press any key to continue . . .
