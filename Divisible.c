#include<stdio.h>
int main ()
{
    int a=30;//Test any int. Number
    if(a%5==0 && a%2!=0)
        printf("\nDivisible by 5 but not 2");

    if(a%10==0 || a%3==0)
        printf("\nDivisible by 10 0r 3"); //For OR you have to use [||]

    if(a%15==0)
        printf("\nDivisible by 15");

}
