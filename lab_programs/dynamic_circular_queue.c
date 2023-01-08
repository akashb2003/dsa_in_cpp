#include <stdio.h>
#include <stdlib.h>

int *q, size, front=-1,rear=-1,cap;

void origin(int x)
{
    q=(int*)malloc(x*sizeof(int));
    cap=x;
    front=0;
    rear = cap-1;
    size=0;
}

int isFull()
{
    return (size==cap);
}

int isEmpty()
{
    return (size==0);
}

void enqueu(int t)
{
    if(isFull())
    {
        printf("\nQueue is full\n");
    }
    // if(rear==-1)
    // {
    //     printf("IM push");
    //     q[++rear]=x; front++;
    //     size++;
    // }
    
    else
    {
        rear = (rear+1)%cap;
        q[rear]=t;
        size++;
    }
}

void dequeu()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\n%d is poped\n",q[front]);
        front=(front+1)%cap; size--;
    }
}

void print()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        // int i=front;
        // while(i!=rear)
        // {
        //     printf("%d ",q[i]);
        //     i=(i+1)%rear;
        // }
        // printf("%d \n\n",q[rear]);
        
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
        printf("%d ", q[i]);
        }
        printf("\n");
    }
}
void peak()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\n%d is peak element\n\n",q[front]);
    }
}

int main()
{
    printf("Enter the size of the circular queuqe\n");
    int n; scanf("%d", &n);
    origin(n);
     while(1)
    {
        printf("Enter the choice\n1.enqueu\n2.dequeu\n3.display\n4.peak\nenter any other number to exit\n");
        int ch,data; scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("\nEnter the data\n");
                    scanf("%d", &data); enqueu(data); break;
            case 2: dequeu(); break;
            case 3: print(); break;
            case 4: peak(); break;
            default: exit(0);
        }
    }

    return 0;
}

