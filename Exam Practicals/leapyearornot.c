#include<stdio.h>

    void leap(int x)
    {
    if(x%400==0 || (x%4==0 && x%100!=0))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    
}
int main()
{
    int x;
    printf("enter a year: "); 
    scanf("%d",&x);
    leap(x);
    return 0;
}