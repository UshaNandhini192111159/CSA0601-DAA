#include <stdio.h>
typedef struct 
{
    int weight;
    int value;
} 
Item;
void swap(Item* a, Item* b) 
{
    Item temp = *a;
    *a = *b;
    *b = temp;
}
void sortItems(Item items[], int n) 
{
	int i,j;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            double ratio1 = (double)items[j].value / items[j].weight;
            double ratio2 = (double)items[j + 1].value / items[j + 1].weight;
            if (ratio1 < ratio2) 
			{
                swap(&items[j], &items[j + 1]);
            }
        }
    }
}
double knapsackGreedy(Item items[], int n, int capacity) 
{
    double totalValue = 0.0;
    sortItems(items, n);
    int i;
    for (i = 0; i < n; i++) 
	{
        if (capacity >= items[i].weight) 
		{
            totalValue += items[i].value;
            capacity -= items[i].weight;
        } else 
		{
            totalValue += (double)items[i].value / items[i].weight * capacity;
            break;
        }
    }
    return totalValue;
}
int main() 
{
    int n, capacity,i;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    Item items[n];
    for (i = 0; i < n; i++) 
	{
        printf("Enter weight and value for item %d: ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }
	printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);
	double maxValue = knapsackGreedy(items, n, capacity);
    printf("Maximum value that can be obtained: %.2lf\n", maxValue);
	return 0;
}

OUTPUT:
Enter the number of items: 4
Enter weight and value for item 1: 40 80
Enter weight and value for item 2: 30 70
Enter weight and value for item 3: 20 50
Enter weight and value for item 4: 30 80
Enter knapsack capacity: 100
Maximum value that can be obtained: 240.00

--------------------------------
Process exited after 24.94 seconds with return value 0
Press any key to continue . . .
