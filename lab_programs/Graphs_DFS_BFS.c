#include<stdio.h>
#include<stdlib.h>
struct node{
    int vertex;
    struct node *link;
};
typedef struct node *NODE;
NODE G[20];
int visited[20];
int n;
int front;
int rear;
int queue[20];
void insert(int vi,int vj)
{
    NODE p,q;
    q=(NODE)malloc(sizeof(struct node));
    q->vertex=vj;
    q->link=NULL;
    if(G[vi]==NULL)
    G[vi]=q;
    else
    {
        p=G[vi];
        while(p->link!=NULL)
        p=p->link;
        p->link=q;

    }
    
}
void readgraph()
{
    int vi,vj,n,e;
    printf("enter number of vertex");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    G[i]=NULL;
    printf("enter number of edges");
    scanf("%d",&e);
    for(int i=0;i<e;i++)
    {
        printf("enter anb edge\n");
        scanf("%d%d",&vi,&vj);
        insert(vi,vj);
        insert(vj,vi);
    }

}

void DFS(int i)
{
    NODE p;
    visited[i]=1;
    printf("%d\n",i);
    // printf("hi");
    for(p=G[i];p;p=p->link)
    if(!visited[p->vertex])
    DFS(p->vertex);
    // printf("hi");

}

void addq(int i)
{
    queue[rear]=i;
    rear++;
    // printf("hi");
}

int deletq()
{
    int i=queue[front++];
    // printf("hi");
    return i;
}

void bfs(int i)
{
    NODE t;
    
    front=0;
    rear=0;
    printf("%d\n",i);
    visited[i]=1;
    addq(i);
    // printf("hi");
    while(front!=rear)
    {
        i=deletq();
        
        for(t=G[i];t;t=t->link)
        {
        if(!visited[t->vertex])
        {
        printf("%d\n",t->vertex);
        // printf("hi");
        addq(t->vertex);
        visited[t->vertex]=1;
        //  printf("hi");
        }
        }
    }
}
void main()
{
    int ch,i;
    printf("first create graph\n");
    readgraph();
 `   
    printf(" 1-dfs    2-bfs    3-exit");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        for(int i=0;i<n;i++)
        visited[i]=0;
        printf("start from which vertex\n");
        scanf("%d",&i);
        DFS(i);
        break;

        case 2:
        for(int i=0;i<n;i++)
        visited[i]=0;
        printf("start from which vertex\n");
        scanf("%d",&i);
        bfs(i);
        break;

        case 3:
        exit(0);
    }
    

}
