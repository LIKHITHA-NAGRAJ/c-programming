#include<stdio.h>
int main()
{
    float principal,time,rate;
    printf("INTEREST :  ");
    printf("Principal,Time,Rate :  ");
    scanf("%f %f %f",&principal,&time,&rate);
    float interest = principal*time*rate/100;
    printf("Interest is : %0.3f\n",interest);
    return 0;
   
}