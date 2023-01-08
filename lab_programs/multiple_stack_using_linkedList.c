#include <stdio.h>
#include<stdlib.h>
#define max 10
typedef struct
{
    int key;
} element;

struct stack 
{
    element data;
    struct stack * link;
};

typedef struct stack* stackptr;
stackptr top[max];

void push(element item, int i)
{
    stackptr temp = (stackptr)malloc(sizeof(stackptr*));
    temp->data= item;
    temp->link=top[i];
    top[i]=temp;
}

element pop(int i)
{
    stackptr temp;
    element item;
    temp = top[i]; 
    if(temp==NULL)
    {
        item.key = -1;
        return item;
    }
    else
    {
    item = temp->data;
    top[i]=top[i]->link;
    free(temp);
    return item;
    }
}

void print(int i)
{
    stackptr temp = top[i];
    for(;temp;temp=temp->link)
    printf("\ndtack is: ");
    {
        printf("%d ",temp->data);
    }
    printf("\n");
}

int main()
{
    element item; int ch,i;
    for(int z=0;i<max;z++)
    {
        top[z] = NULL;
        printf("\n1-push\n2-pop\n3-display\n\nAny other number to exit\n");
        printf("enter choice\n"); scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the data\n");
            scanf("%d", &item.key);
            printf("\nEnter the stack number in which you want to insert the data\n");
            scanf("%d", &i);
            push(item,i-1);
            break;
            
            case 2:
            printf("\nEnter the stack number in which you want to pop the data\n");
            scanf("%d", &i);
            item = pop(i-1);
            if(item.key == -1){
                printf("\nStack is empty\n");
            } 
            else {printf("\n%d is poped\n",item.key); 
            }
            break;
            
            case 3:
            printf("\nEnter the stack number which you want to display the data\n");
            scanf("%d", &i);
            print(i-1);
            break;
            
            default:
            exit(0);
        }
    }
    return 0;
}

