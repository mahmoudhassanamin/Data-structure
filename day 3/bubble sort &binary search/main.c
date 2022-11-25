#include <stdio.h>
#include <stdlib.h>
#include "b_Bs.h"
int main()
{
     Node * own_node = NULL;
     int x=0;
     Add(90);
     Add(47);
     Add(103);
     Add(46);
     Add(59);
     Add(80);
     Add(43);
     Add(76);
     Bublle_sort();
     Display();
     printf("enter data for search about it : ");
     scanf("%d",&x);
     int check = GetNodeByData(x,&own_node);
     if (check == 1)
     {
            printf("\ndata found = %d \n", own_node->Data);
     }
     else
     {
            printf("\ndata not found ");
     }

}
