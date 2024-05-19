#include<stdio.h>
int main()
{
    char arr[1000];
    scanf("%s",&arr);
    int len;
    for(len=0;arr[len]!='\0';++len);
    printf ("%d\n",len);

}
