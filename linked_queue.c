#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
} * top = NULL, *rear = NULL;

int isFull()
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    if(p == NULL)
    return 1;
    return 0;
}

void enqueue(int data)
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    if(isFull())
    {
        printf("Queue overflow\n");
    }
    if(top ==NULL && rear == NULL)
    {
        top = rear = p;
        p->data = data;
        p->next = NULL;
    }
    else
    {
        p->data = data;
        p->next = NULL;
        rear->next = p;
        rear = p;
    }
}

void dequeue()
{
    if(top==NULL && rear == NULL)
    {
    printf("Queue underflow\n");
    }
    else
    {
        struct node* p = top;
        struct node* q = top->next;
        int r = p->data;
        p->next = NULL;
        free(p);
        top = q;
        printf("\n\n%d is dequeueed\n",r);
    }
}

void displaylist(struct node * top)
{
    struct node* p = top;
    if(top==NULL && rear == NULL)
    {
    printf("Queue underflow\n");
    }
    else
    {
    printf("\n\nQueuqe\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    }
}

void peak()
{
    if(top==NULL && rear == NULL)
    printf("\n queue underflow\n");
    else
    printf("\npeak element is %d\n",top->data);
}

int main()
{
     while(1)
     {
         printf("\nEnter a choice\n1.enqueue\n2.dequeue\n3.display\n4.peak element\nEnter any other num to exit\n");
         int ch,data; scanf("%d", &ch);
         switch(ch)
         {
             case 1: printf("Enetr the data to be enqueueed\n");
                     scanf("%d",&data); enqueue(data); break;
             case 2: dequeue();break;
             case 3: displaylist(top);break;
             case 4: peak();break;
             default : exit(0);break;
         }
     }
    return 0;
}
