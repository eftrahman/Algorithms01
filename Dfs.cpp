#include<bits/stdc++.h>
using namespace std;
int g[5][5]={{0,1,0,1,1},{1,0,1,1,0},{0,1,0,1,0},{1,1,0,0,1},{1,0,0,1,0}};
int visited[5];
//int maxsize =10;
//int stacks[10];
//int top =-1;
/*void push(int data){
    if(top==maxsize){
        cout<<"overflow"<<endl;
    }
    else{
        top=top+1;
        stacks[top]=data;
    }
}
int pop(){
    int data;
    if(top==-1){
        cout<<"underflow"<<endl;
    }

    else{
        data=stacks[top];
        top =top-1;
        return data;
    }
}*/
void DFS(int v){
    int i;
    visited[v]=1;
    cout<<"visited : "<<v<<endl;
    for(i=0;i<5;i++){
        if(visited[i]==0&&g[v][i]==1){
            DFS(i);
        }
    }
}
int main(){
    int i;
    memset(visited,false,sizeof(visited));
    cout<<"enter starting vertices : ";
    cin>>i;
    DFS(i);
    return 0;
}
