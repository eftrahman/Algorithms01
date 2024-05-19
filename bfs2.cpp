#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int n=5;
//int n;
int adj[5][5]={{0,1,0,1,1},{1,0,1,1,0},{0,1,0,1,0},{1,1,0,0,1},{1,0,0,1,0}};
//int adj[MAX][MAX];
int state[MAX];
void create_graph();
//void BF_Traversal();
void BFS(int v);

int Queue[MAX], front = -1,rear = -1;
void enqueue(int vertex);
int dequeue();
int emptyQueue();

int main()
{
    //create_graph();
    //BF_Traversal();
    int v;
    for(v=0;v<n;v++){
        state[v]=0;
    }
    //memset(state,initial,sizeof(state));
    cout<<"Enter first node : ";
    cin>>v;
    BFS(v);
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
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else{
        if(front == -1)
            front = 0;
        rear = rear+1;
        Queue[rear] = vertex ;
    }
}

int emptyQueue(){
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
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
    int deleted;
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
        exit(1);
    }
    deleted = Queue[front];
    front = front+1;
    return deleted;
}
/*void create_graph(){
    int count,max_edge,origin,destin;

    printf("Enter number of vertices : ");
    scanf("%d",&n);
    max_edge = n*(n-1);

    for(count=1; count<=max_edge; count++)
    {
        printf("Enter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);

        if((origin == -1) && (destin == -1))
            break;

        if(origin>=n || destin>=n || origin<0 || destin<0)
        {
            printf("Invalid edge!\n");
            count--;
        }
        else
        {
            adj[origin][destin] = 1;
        }
    }
}*/
/*void BF_Traversal(){
    int v;
    for(v=0; v<n; v++)
        state[v] = initial;
    printf("Enter Start Vertex for BFS: \n");
    scanf("%d", &v);
    BFS(v);
}*/

void BFS(int v){
    int i;
    enqueue(v);
    state[v] = 1;
    while(!emptyQueue()){
        v = dequeue();
        cout<<"Visited : "<<v<<endl;
        state[v] = 2;
        for(i=0; i<n; i++){
            if(adj[v][i] == 1 && state[i] == 0){
                enqueue(i);
                state[i] = 1;
            }
        }
    }
}
