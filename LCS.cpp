#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int max(int a,int b);
int lcs(char *X,char *Y,int m,int n)
{
    int L[m+1][n+1];
    int i,j;
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0|| j==0)
            {
                L[i][j]=0;
            }
            else if (X[i-1]==Y[j-1])
            {

                L[i][j]=L[i-1][j-1]+1;

            }
            else
            {
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[m][n];
}
int max(int a,int b)
{
    return(a>b)? a:b;
}
int main()
{
    int m,n;
    cout<<"length of first string : ";
    cin>>m;
    char X[m];
    cout<<"First string : ";
    cin>>X;
    cout<<"length of second array : ";
    cin>>n;
    char Y[n];
    cout<<"Second string : ";
    cin>>Y;
    cout<<"Length of LCS is: "<<lcs(X,Y,m,n);
    cout<<"\n";
    getch();
}
