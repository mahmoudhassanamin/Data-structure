#include <stdlib.h>
#include <stdio.h>
typedef struct Node Node1;
struct Node{
    int data;
    Node1 *prev;
};
Node1 *top = NULL;

void push (int data){

        Node1 *newnode=(Node1 *)malloc (sizeof(Node1));
        newnode->data=data;
        if(top==NULL){
            newnode->prev=NULL;
            top=newnode;
        }
        else{
            newnode->prev=top;
            top=newnode;
        }
}
int pop (int *data){
    if(top == NULL){
        return 0;
    }
    *data=top->data;
    top=top->prev;
    return 1;
}



