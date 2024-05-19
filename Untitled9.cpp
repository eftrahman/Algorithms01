#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    int Arr[A][B];
    int i,j;
    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            cin>>Arr[i][j];
        }
    }
    int x,y;
    for(x=0;i<A;i++){
        for(y=0;j<B;j++){
            cout<<Arr[x][y]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

