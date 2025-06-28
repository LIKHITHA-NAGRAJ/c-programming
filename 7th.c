#include<stdio.h>
int main()
{
    float len=0,breadth=0;
    printf("Enter length and breadth of triangle : ");
    scanf("%f %f",&len,&breadth);
    float area=0.5*len*breadth;
    printf("Area : %f ",area);
    return 0;
}