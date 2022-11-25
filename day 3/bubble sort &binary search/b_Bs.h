#ifndef B_S_
#define B_S_

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Prev, *Next;
};
void swap(Node *index);
void Bublle_sort();
int GetNodeByData(int data, Node ** your_node);
void Add(int data);
void Display();
#endif // B_S_

