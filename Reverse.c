#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isNumber(const char *str)
 {
    while (*str)
        if (*str < '0' || *str > '9')
            return false;
        else
            str++;
    return true;
}
int main()
 {
    char input[100];
    printf("Enter a number: ");
    scanf("%s",input);
    if (!isNumber(input))
	{
        printf("Invalid input.\n");
        return 1;
    }
    int num=atoi(input),reversedNum=0;
    while(num)
	{
        reversedNum=reversedNum*10+num%10;
        num/=10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}

OUTPUT:
Enter a number: 1234
Reversed number: 4321

--------------------------------
Process exited after 5.969 seconds with return value 0
Press any key to continue . . .

Enter a number: 45a34
Invalid input.

--------------------------------
Process exited after 3.625 seconds with return value 1
Press any key to continue . . .
