#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num==0)
    printf("zero");
    else if(num>0)
    printf("Positive");
    else
    printf("Negative");
    return 0;
}