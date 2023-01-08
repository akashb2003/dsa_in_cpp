#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct{
    int key;
}element;
struct queue{
    element data;
    struct queue *link;
};
typedef struct queue *queueptr;
queueptr front[MAX];
queueptr rear[MAX];
void push(element item,int i)
{
    queueptr temp;
    temp=(queueptr)malloc(sizeof(queueptr*));
    temp->data=item;
    temp->link=NULL;
    if(front[i])
    {
        rear[i]->link=temp;
    }
    else
        front[i]=temp;
        rear[i]=temp;
        // rear[i]->link=front[i];
    
}
element pop(int i)
{
    queueptr temp;
    element item;
    temp=front[i];
    if(temp==NULL)
    {
        item.key=-1;
        return item;

    }
    
        item=temp->data;
        front[i]=temp->link;
        free(temp);
        return item;
    
}
void display(int i)
{
    queueptr temp;
    temp=front[i];
    if(temp==NULL)
    {
    printf("no queue\n");
    return;
    }
   
        while(temp!=rear[i]->link)
        {
        printf("%d\t",temp->data);
        temp=temp->link;
        }
    
}
void main()
{
    int ch,z,i;
    element item;
    for(z=0;z<MAX;z++)
    {
        front[z]=NULL;
        rear[z]=NULL;

    }
    while(1)
    {
        printf("\n1-push\t2-pop\t3-display\t4-exit\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter item\n");
            scanf("%d",&item.key);
            printf("enter queue\n");
            scanf("%d",&i);
            push(item,i-1);
            break;

            case 2:
            printf("enter i\n");
            scanf("%d",&i);
            item=pop(i-1);
            if(item.key==-1)
            printf("queue empty\n");
            else
            printf("deleted is %d",item.key);
            break;

            case 3:
            printf("enter i\n");
            scanf("%d",&i);
            display(i-1);
           
            break;

            case 4:
            exit(0);



        }
    }

}
