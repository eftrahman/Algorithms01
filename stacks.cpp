#include<bits/stdc++.h>
using namespace std;
int maxsize =10;
int stacks[10];
int top =-1;
void push(int data){
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
}
int main(){
    push(1);
    push(2);
    push(3);
    while(top!=-1){
        int data = pop();
        cout<<data<<endl;
    }
    return 0;
}
