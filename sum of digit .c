#include<stdio.h>  
int main()    
{    
 int n,sum=0,digit;    
 printf("Enter a number:");    
 scanf("%d",&n);    
 while(n>0)    
 {    
  digit=n%10;    
  sum=sum+digit;    
  n=n/10;    
 }    
 printf("Sum is %d",sum);    
 return 0;  
}

OUTPUT:
Enter a number:456
Sum is 15
--------------------------------
Process exited after 2.28 seconds with return value 0
Press any key to continue . . .
