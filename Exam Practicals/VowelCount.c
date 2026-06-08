#include<stdio.h>



    void v()
    {
    char text[200];
    int count=0,i;
    printf("Enter the string: ");
    gets(text);
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u'||text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels in the string is %d",count);
    }
    int main()
{
    v();
    return 0;
}
