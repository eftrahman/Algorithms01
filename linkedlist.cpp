#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void display(struct Node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
void insertAfter(struct Node *prev,int newData){
    if(prev==NULL){
        cout<<"Prev can't be NULL"<<endl;
    }
    struct Node* newNode=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=prev->next;
    prev->next=newNode;
}
int main(){
    struct Node* head = NULL;
    struct Node* second =NULL;
    struct Node* third =NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    cout<<"before"<<endl;
    display(head);
    cout<<"After"<<endl;
    insertAfter(head->next,5);
    display(head);
    return 0;
}
