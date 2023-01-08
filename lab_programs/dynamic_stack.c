#include <stdio.h>
#include <stdlib.h>

int *st,top =-1,cap=0;

void push(int x)
{
    if(top==cap-1)
    cap++;
    st = realloc(st, cap*sizeof(int));
    st[++top]=x;
}

void pop()
{
    if(top==-1)
    printf("\nstack underflow\n");
    else{
    printf("\n%d is poped\n", st[top]);
    top--;
    }
    printf("\n");
}

void print()
{
    if(top==-1)
    {
    printf("\nstack underflow\n");
    }
    else
    {
        printf("\nStack is: \n");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",st[i]);
        }
        printf("\n");
    }
}

void main()
{
    st = malloc(cap*sizeof(int));
    while(1)
    {
        printf("Enter the choice\n1.push\n2.pop\n3.display\nenter any other number to exit\n");
        int ch,data; scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("\nEnter the data\n");
                    scanf("%d", &data); push(data); break;
            case 2: pop(); break;
            case 3: print(); break;
            default: exit(0);
        }
    }
}

