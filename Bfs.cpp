#include<bits/stdc++.h>
using namespace std;
#define max 100
#define initial 1
#define waiting 2
#define visited 3
//int n=5;
int n;
//int adj[30][30];
int adj[5][5]={{0,1,0,1,1},{1,0,1,1,0},{0,1,0,1,0},{1,1,0,0,1},{1,0,0,1,0}};
int state[20];
void createGraph();
void BFT();
void BFS(int v);
int Queue[max],front =-1,rear =-1;
void enqueue(int vertex);
int dequeue();
int emptyqueue();

int main(){
    //createGraph();
    BFT();
    return 0;
}
/*void push(int data){
    if(top==maxsize){
        cout<<"overflow"<<endl;
    }
    else{
        top=top+1;
        stacks[top]=data;
    }
}*/
void enqueue(int vertex){
    if(rear==max-1){
        cout<<"overflow"<<endl;
    }
    else{
        if(front==-1){
            front =0;
        }
        rear=rear+1;
        Queue[rear]=vertex;
    }
}
int emptyqueue(){
    if(front==-1||front>rear){
        return 1;
    }
    else{
        return 0;
    }
}
/*int pop(){
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
int dequeue(){
    int deleteitem;
    if(front==-1||front>rear){
        cout<<"underflow"<<endl;
        exit(1);
    }
    else if(front == rear){
        front=rear=-1;
    }
    deleteitem = Queue[front];
    //else{
        front = front+1;
    //}
    return deleteitem;
}

/*void createGraph(){
    int Count,maxedge,origin,dest;
    cout<<"enter number of vertices"<<endl;
    cin>>n;
    maxedge=n*(n-1);
    cout<<"Adjacent Matrix :"<<endl;
    for(Count =1;Count<=maxedge;Count++){
        cout<<Count<<"st edge :";
        cin>>origin>>dest;
        if(origin ==-1||dest==-1){
            break;
        }
        else if(origin>n||dest>n||origin<0||dest<0){
            cout<<"Invalid entry"<<endl;
            Count--;
        }
        else{
            adj[origin][dest]=1;
        }
    }
}*/
void BFT(){
    int v;
    for(v=0;v<n;v++){
        state[v]=initial;
    }
        cout<<"Starting vertex :";
        cin>>v;
        BFS(v);
}
void BFS(int v){
    int i;
    enqueue(v);
    state[v]=waiting;
    while(!emptyqueue()){
        v=dequeue();
        state[v]=visited;
        cout<<"visited - "<<v<<endl;
        for(i=0;i<n;i++){
            if(adj[v][i]==1&&state[i]==initial){
                enqueue(i);
                state[i]=waiting;
            }
        }
    }

}
