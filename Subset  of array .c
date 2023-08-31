#include <stdio.h>
void generateSubsets(int arr[], int n) {
	int i,j;
    for (i = 0; i < (1 << n); i++) {
        printf("{ ");
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}
int main() {
    int i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
	int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	printf("All possible subsets:\n");
    generateSubsets(arr, n);

    return 0;
}

OUTPUT:
Enter the number of elements in the array: 3
Enter the elements of the array:
1
2
3
All possible subsets:
{ }
{ 1 }
{ 2 }
{ 1 2 }
{ 3 }
{ 1 3 }
{ 2 3 }
{ 1 2 3 }

--------------------------------
Process exited after 3.294 seconds with return value 0
Press any key to continue . . .
