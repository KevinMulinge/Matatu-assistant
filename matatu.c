/*
A program to be used in matatu business
*/
#include<stdio.h>
int main()
{
float trip[100],lunch=0,fuel=0,total=0;
int count,trip1;

printf("Enter the number of trips \n");
scanf("%d",&trip1);

for(count=0;count<trip1;count++)
{
printf("Enter the amount of trip %d : \n",count+1);
scanf("%f",&trip[count]);
total=total+trip[count];
}
printf("Enter total amount of fuel : \n");
scanf("%f",&fuel);
printf("Enter total amount of lunch : \n");
scanf("%f",&lunch);
total=total-(lunch+fuel);
printf("Total amount is %6.2f",total);
return 0;
}
