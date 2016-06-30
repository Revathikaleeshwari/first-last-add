#include<stdio.h>
int main()
{
int num;
int sum=0,i,lastdigit;
printf("Enter any number one digit:");
scanf("%d",&num);
sum=sum+num%10;
while(num!=0)
{
lastdigit=num;
num=num/10;
}
sum=sum+lastdigit;
printf("\nSum of first and last digit of given number is:%d",sum);
return 0;
}
