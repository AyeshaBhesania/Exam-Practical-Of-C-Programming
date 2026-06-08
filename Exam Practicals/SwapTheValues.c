#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   
}
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("The Values Of The Two Integers Before Swapping Is:\n");
     
    printf("a = %d ",a);
    printf("b = %d ",b);
    printf("\n");
    swap(&a,&b);
    printf("The Values Of The Two Integers After Swapping Is:\n");
    printf("a = %d ",a);

    printf("b = %d ",b);
    return 0;
}
