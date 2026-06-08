#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int pr = 1;

    for (int i = 1; i <= n; i++)
    {

        pr = pr * i;
    }
    printf("The Factorial of %d is %d", n, pr);
    return 0;
}