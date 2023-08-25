#include <stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter %d integers", n);
    for(i = 0; i < n; i++)
    scanf("%d",&array[i]);
    printf("Enter value to find");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high) 
	{
        if(array[mid] < key)
        low = mid + 1;
        else if (array[mid] == key) 
		{
            printf("%d found at location %d.n", key, mid+1);
            break;
        }
        else
        high = mid - 1;
        mid = (low + high)/2;
    }
    if(low > high)
    printf("Not found! %d isn't present in the list.n", key);
    return 0;
}

OUTPUT:
Enter number of elements6
Enter 6 integers
12
16
56
84
92
4
Enter value to find84
84 found at location 4.n
--------------------------------
Process exited after 21.09 seconds with return value 0
Press any key to continue . . .
