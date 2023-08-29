#include <stdio.h>
int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) 
{
    int dp[n + 1][W + 1],i,w;

    for (i = 0; i <= n; i++) 
	{
        for (w = 0; w <= W; w++) 
		{
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() 
{
    int n,i;
    printf("Enter the number of items: ");
    scanf("%d", &n);
	int wt[n], val[n];
    printf("Enter the weights and profits of each item:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Item %d: ", i + 1);
        scanf("%d %d", &wt[i], &val[i]);
    }
	int W;
    printf("Enter the knapsack weight: ");
    scanf("%d", &W);
	int result = knapsack(W, wt, val, n);
    printf("Maximum profit: %d\n", result);
	return 0;
}

OUTPUT:
Enter the number of items: 4
Enter the weights and profits of each item:
Item 1: 40 80
Item 2: 30 70
Item 3: 20 50
Item 4: 30 80
Enter the knapsack weight: 100
Maximum profit: 230

--------------------------------
Process exited after 20.9 seconds with return value 0
Press any key to continue . . .
