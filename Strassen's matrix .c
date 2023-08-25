#include <stdio.h>
void strassen(int A[2][2], int B[2][2], int C[2][2]) 
{
    int m1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int m2 = (A[1][0] + A[1][1]) * B[0][0];
    int m3 = A[0][0] * (B[0][1] - B[1][1]);
    int m4 = A[1][1] * (B[1][0] - B[0][0]);
    int m5 = (A[0][0] + A[0][1]) * B[1][1];
    int m6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int m7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    C[0][0] = m1 + m4 - m5 + m7;
    C[0][1] = m3 + m5;
    C[1][0] = m2 + m4;
    C[1][1] = m1 - m2 + m3 + m6;
}
int main() 
{
    int A[2][2],B[2][2],C[2][2],sum=0, i, j, k;
    printf("Enter first 2*2 matrix element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &A[i][j]);
    }
    printf("Enter second 2*2 matrix element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &B[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
                sum = sum + B[i][k] * B[k][j];
            C[i][j] = sum;

        }
    }
    strassen(A, B, C);
    printf("Resultant matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

OUTPUT:
Enter first 2*2 matrix element: 1
2
3
4
Enter second 2*2 matrix element: 5
6
7
8

Multiplying two matrices...Resultant matrix:
19 22
43 50

--------------------------------
Process exited after 12.4 seconds with return value 10
Press any key to continue . . .
