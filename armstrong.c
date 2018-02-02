#include<stdio.h>
int main()
{
int digit,sum=0,num,result;
printf("Enter the number");
scanf("%d",&num);
result=num;
while(num!=0)
{
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(result==sum)
{
printf("yes");
}
else
printf("no");
return 0;
}
