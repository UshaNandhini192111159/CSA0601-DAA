#include<stdio.h>
int main()
{
	int array[100],n,c,d,swap;
	printf("enter numner of elements\n");
	scanf("%d",&n);
	printf("enter the integer\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
	for(c=0;c<n-1;c++)
	{
		for(d=0;d<n-c-1;d++)
		{
			if(array[d]>array[d+1])
			{
				swap=array[d];
				array[d]=array[d+1];
				array[d+1]=swap;
			}
		}
	}
	printf("sorted list in ascending order:\n");
	for(c=0;c<n;c++)
	{
		printf("%d\n",array[c]);
	}
	return 0;
}

OUTPUT:
enter numner of elements
7
enter the integer
10
5
80
-2
15
23
45
sorted list in ascending order:
-2
5
10
15
23
45
80

--------------------------------
Process exited after 18.94 seconds with return value 0
Press any key to continue . . .
