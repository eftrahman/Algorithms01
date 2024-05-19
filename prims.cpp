#include<bits/stdc++.h>
#include <cstring>
using namespace std;
#define V 5 //int V =5;
#define HIGH 314159 //int HIGH = 999999;
int main()
{
    int Grph[V][V]={{0,4,0,5,2},
                    {4,0,1,3,0},
                    {0,1,0,8,0},
                    {5,3,0,0,2},
                    {2,0,0,2,0}};
    int vstdArray[V];
    int cost=0;
    for(int x=0;x<V;x++){
        vstdArray[x]=0;
    }
    //memset(vstdArray,false,sizeof(vstdArray));
    vstdArray[0]=1;
    int edgeNum=0;
    while(edgeNum<V-1){
        int min=HIGH,r =0, c=0;
        for(int i=0;i<5;i++){
            if(vstdArray[i]){
                for(int j=0;j<5;j++){
                    if(min>Grph[i][j]){
                        if(!vstdArray[j]&&Grph[i][j]){
                            min=Grph[i][j];
                            r=i;
                            c=j;
                        }
                    }
                }
            }
        }
        cost = cost+Grph[r][c];
        cout<<"<"<<r<<","<<c<<">"<<"-"<<Grph[r][c]<<endl;
        vstdArray[c]=1;
        edgeNum++;
    }
    cout<<"MST Cost : "<<cost;
    return 0;
}
