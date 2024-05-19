#include<bits/stdc++.h>
using namespace std;

#define MAX 100

#define initial 1
#define waiting 2
#define visited 3

int n=4;
int adj[4][4]={{0,1,1,0},
               {1,0,0,1},
               {1,0,0,1},
               {0,1,1,0}};
int state[MAX];
void BFS(int v);

int Queue[MAX], front = -1,rear = -1;
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();

int main()
{
    int v;
    for(v=0; v<n; v++){
        state[v] = initial;
    }
    printf("Enter Start Vertex for BFS: \n");
    scanf("%d", &v);
    BFS(v);
    return 0;
}

void BFS(int v)
{
    int i;
    insert_queue(v);
    state[v] = waiting;
    while(!isEmpty_queue())
    {
        v = delete_queue( );
        printf("%d ",v);
        state[v] = visited;
        for(i=0; i<n; i++)
        {
            if(adj[v][i] == 1 && state[i] == initial)
            {
                insert_queue(i);
                state[i] = waiting;
            }
        }
    }
    printf("\n");
}

void insert_queue(int vertex)
{
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1)
            front = 0;
        rear = rear+1;
        Queue[rear] = vertex ;
    }
}

int isEmpty_queue()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}

int delete_queue()
{
    int delete_item;
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    delete_item = Queue[front];
    front = front+1;
    return delete_item;
}
