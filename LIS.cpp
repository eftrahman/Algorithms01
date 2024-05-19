#include<bits/stdc++.h>
using namespace std;
int lis(int arr[], int n)
{
    int *lis, i, j, max=0;
    lis=(int*) malloc(sizeof(int) *n);
    for(i=0; i<n; i++)
        lis[i]=1;
    for(i=0; i<n; i++)
        for(j=0; j<i; j++)
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;

    for(i=0; i<n; i++)
        if(max<lis[i])
            max=lis[i];

    free(lis);
    return max;
}
int main()
{
    int N;
    cout<<"Length of array: ";
    cin>>N;
    int arr [N];
    cout<<"Input arr : ";
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    printf("The length of Longest Increasing Subsequence is %d\n",lis(arr,N));
           return 0;
}
