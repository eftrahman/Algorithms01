#include<stdio.h>
int main(){
    int arr[100];
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    for(j=0;i<a;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
