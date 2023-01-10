#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct{
    int key;
}element;

struct stack{
    element data;
    struct stack *link;
};
typedef struct stack *stackptr;
stackptr top[MAX];
void push(element item,int i)
{
    stackptr temp;
    temp=(stackptr)malloc(sizeof(stackptr*));
    temp->data=item;
    temp->link=top[i];
    top[i]=temp;

}
element pop(int i)
{
    stackptr temp;
    element item;
    temp=top[i];
    if(temp==NULL)
    {
        item.key=-1;
        return item;
    }
    else
    {
        top[i]=top[i]->link;
        item=temp->data;
        free(temp);
        return item;
    }
    
}
void display(int i)
{
    stackptr temp=top[i];
    printf("contents of stack are\n");
    for(;temp;temp=temp->link)
    {
        printf("%d\t",temp->data);
    }
    
}
void main()
{
    int ch,z,i;
    element item;
    for(z=0;z<MAX;z++)
    top[z]=NULL;
    do
    {
       
        printf("\n1-push\t2-pop\t3-display\t4-exit\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the item to be inserted\n");
            scanf("%d",&item.key);
            printf("enter the stack in which you want to insert it\n");
            scanf("%d",&i);
            push(item,i-1);
            break;

            case 2:
            printf("enter the stack from which you want to remove the element\n");
            scanf("%d",&i);
            item=pop(i-1);
            if(item.key==-1)
            {
                printf("empty stack\n");
            }
            else
            {
                printf("item deleted is %d",item.key);
            }
            break;

            case 3:
            printf("enter stack number ypu would like to display\n");
            scanf("%d",&i);
            display(i-1);
            break;

            case 4:
            break;


            default:
            printf("ivalid choice\n");
        }
    } while(ch!=4);
    
}
