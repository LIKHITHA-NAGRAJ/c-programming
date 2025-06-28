#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float sum=0,average=0;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    average=sum/3;
    printf("Sum : %f \t Average : %f ",sum,average);
    return 0;

}