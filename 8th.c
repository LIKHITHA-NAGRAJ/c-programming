#include<stdio.h>
int main()
{
    float length ,breadth;
    printf(" Enter length and breadth : ");
    scanf("%f %f",&length,&breadth);
    float area = length* breadth;
    float perimeter = 2*(length+breadth);
    printf("Area : %f \t Perimeter : %f ",area,perimeter);
    return 0;
}