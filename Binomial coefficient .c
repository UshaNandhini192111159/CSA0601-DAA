#include <stdio.h>
int binomialCoefficient(int n, int k) 
{
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++) 
	{
        for (j = 0; j <= k && j <= i; j++) 
		{
            if (j == 0 || j == i) 
			{
                C[i][j] = 1;
            } 
			else 
			{
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
    return C[n][k];
}
int main() 
{
    int n,k;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of k:");
    scanf("%d",&k);
    int result = binomialCoefficient(n, k);
    printf("Binomial coefficient C(%d, %d) = %d\n", n, k, result);
    return 0;
}

OUTPUT:
enter the value of n:8
enter the value of k:8
Binomial coefficient C(8, 8) = 1

--------------------------------
Process exited after 5.08 seconds with return value 0
Press any key to continue . . .
