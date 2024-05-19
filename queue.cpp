#include<bits/stdc++.h>
using namespace std;
int front = -1,rear = -1;
int size = 10;
int Queue[10];

void Enqueue(int data){
    if(rear==(size-1)){
        cout<<"Overflow!!"<<endl;
    }
    else if(rear == -1){
        front = rear =0;
        Queue[rear]=data;
        rear = rear+1;
    }
    else{
        Queue[rear]=data;
        rear =rear+1;
    }
}
void Dequeue(){
    if (front ==-1){
        cout<< "Underflow!!"<<endl;
    }
    else if(front == rear){
        front=rear=-1;
    }
    else{
        front = front+1;
    }
}
void Display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<rear;i++){
            cout<<Queue[i]<<"<-";
        }
    }
}

int main(){
    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Display();
    cout<<endl;
    Dequeue();
    Display();
    return 0;
}
