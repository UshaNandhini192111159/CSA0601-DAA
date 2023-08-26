#include <stdio.h>
int linearSearch(int arr[], int size, int key) 
{
    int i;
	for (i = 0; i < size; i++) 
	{
        if (arr[i] == key) 
		{
            return i; 
        }
    }
    return -1; 
}
int main() 
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key element to search: ");
    scanf("%d", &key);
    int position = linearSearch(arr, n, key);
    if (position != -1) 
	{
        printf("Element found in position %d\n", position + 1);
    } 
	else 
	{
        printf("Element not found.\n");
    }
    return 0;
}

OUTPUT:
Enter the number of elements: 7
Enter the elements:
89
45
-23
45
0
44
2
Enter the key element to search: -23
Element found in position 3

--------------------------------
Process exited after 33.85 seconds with return value 0
Press any key to continue . . .
