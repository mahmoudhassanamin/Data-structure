#include <stdio.h>
#include <stdlib.h>
#include "b_Bs.h"
Node *head = NULL, *tail = NULL;
void Display()
{
    Node *current = head;

    while(current != NULL)
    {
        printf("%d \n", current->Data);
        current = current->Next;
    }
}
void Add(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        newNode->Prev = tail;
        tail = newNode;
    }
}
int GetCount(Node * start,Node * end){
    int counter=0;
    Node *current = start;

    while(current != end)
    {
        counter++;
        current = current->Next;
    }

    return counter;
}

int GetNodeByData(int data, Node ** your_node)
{
    Bublle_sort();
    Node *start , *end ,*mid;
    start=mid=head;
    end=tail;
    int mid_size ,i=0;
    while(start != NULL && end != NULL && start ->Prev != end ){
        mid=start;
        mid_size= GetCount(start,end) /2;
        for(i=0;i<mid_size;i++)
        {
            mid=mid->Next;
        }

        if( mid->Data == data ){
            *your_node=mid;
            return 1;

        }
        else if(data < mid->Data)
        {

            end=mid->Prev;

        }
        else
        {

            start=mid->Next;


        }
    }
    return 0;

}

void Bublle_sort(){
    Node *index ;
    Node *end =tail ;
    int flage=0;

    while(flage !=1 && head->Next != end ){
        flage=1;
        index = head;

        while (index != end )
        {

            if(index->Data > index->Next->Data)
            {
                  swap(index);
                  flage=0;
            }
            index=index->Next;
        }
        end = end->Prev;

    }
}

void swap(Node * index)
{
    int temp=0;
    temp=index->Data;
    index->Data=index->Next->Data;
    index->Next->Data=temp;
}
