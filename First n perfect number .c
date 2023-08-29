#include <stdio.h>
int isPerfect(int num) 
{
    int sum = 1,i;
    for (i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		{
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    if (sum == num && num != 1)
        return 1;
    return 0;
}
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 1) 
	{
        printf("Invalid input.\n");
        return 1;
    }
    printf("First %d perfect numbers are:", n);
    int count = 0;
    int num = 1;
    while (count < n) 
	{
        if (isPerfect(num)) 
		{
            printf(" %d", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}

OUTPUT:
Enter the value of n: 3
First 3 perfect numbers are: 6 28 496

--------------------------------
Process exited after 1.728 seconds with return value 0
Press any key to continue . . .
