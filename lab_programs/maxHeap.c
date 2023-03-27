#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef struct
{
int key;
} element;

element heap[MAX_SIZE];

void add(element item,int *n)
{
    if((*n)>= MAX_SIZE-1)
    {
        printf("Full\n");
        return;
    }
    int i = ++(*n);
    while(i>1 && (item.key> heap[i/2].key))
    {
            heap[i] = heap[i/2];
            i = i/2;
    }
    heap[i] = item;
}

element delet(int *n)
{
    element item;
    if(*n==0)
    {
        printf("Empty\n");
        item.key = -1;
        return item;
    }
    element temp;
    item = heap[1];
    temp = heap[(*n)--];
    int child = 2, parent = 1;
    while(child <= (*n))
    {
        if(child< (*n) && heap[child].key< heap[child+1].key)
        child++;
        if(temp.key>=heap[child].key)
        break;
        heap[parent]= heap[child];
        parent = child;
        child = 2*child;
    }
    heap[parent]= temp;
    return item;
}

void display(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",heap[i].key);
    }
}

int main()
{
    int choice,n=0; 
element item;
while(1)
{
printf("\nEnter\n 1. Insert\n 2. Display\n 3. Delete\n 4. Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter element to insert");
scanf("%d", &item.key);
add(item, &n);
break;
case 2:
display(n); 
break;
case 3:
item = delet(&n);
if(item.key!=-1)
printf("Element Deleted: %d\n",item.key);
break;
case 4:
exit(0); }
}
return 0;
}

