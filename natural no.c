#include <stdio.h>
#include<conio.h>
int main(void) 
{
int n;
int sum=0,i;
printf("enter the n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;

}
