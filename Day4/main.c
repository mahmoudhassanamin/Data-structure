#include <stdio.h>
#include <stdlib.h>

#include "Tree.h"

int main()
{
    Tree tree = {.Root = NULL};

    Add(&tree, 50);
    Add(&tree, 40);
    Add(&tree, 30);
    Add(&tree, 65);
    Add(&tree, 70);
    Add(&tree, 60);
    Add(&tree, 35);
    Add(&tree, 25);
    Add(&tree, 31);
    Add(&tree, 32);
    Display(tree.Root);
    int result=GetMaxDepth(tree.Root);
    printf("\nthe max depth is : %d",result);
    return 0;
}
