#include <stdio.h>
#define MAX_SIZE 100
void subsetSum(int arr[], int n, int sum, int currentIndex, int currentSum, int subset[], int subsetIndex) 
{
	int i;
    if (currentSum == sum) 
	{
        printf("Subset with sum %d: ", sum);
        for (i = 0; i < subsetIndex; i++) 
		{
            printf("%d ", subset[i]);
        }
        printf("\n");
        return;
    }
    if (currentIndex == n || currentSum > sum) 
	{
        return;
    }
    subset[subsetIndex] = arr[currentIndex];
    subsetSum(arr, n, sum, currentIndex + 1, currentSum + arr[currentIndex], subset, subsetIndex + 1);
    subsetSum(arr, n, sum, currentIndex + 1, currentSum, subset, subsetIndex);
}
int main() 
{
    int n,i, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[MAX_SIZE];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the desired sum: ");
    scanf("%d", &sum);
    int subset[MAX_SIZE];
    subsetSum(arr, n, sum, 0, 0, subset, 0);
    return 0;
}

OUTPUT:
Enter the number of elements: 5
Enter the elements:
6
2
8
1
5
Enter the desired sum: 9
Subset with sum 9: 6 2 1
Subset with sum 9: 8 1

--------------------------------
Process exited after 22.3 seconds with return value 0
Press any key to continue . . .
