#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define max 20

char postfix[max]; int stack[max], top =-1;

void push(int x)
{
    if(top==max-1)
    return;
    stack[++top]=x;
}

int pop()
{
    if(top==-1)
    return -1;
    return stack[top--];
}

int calc()
{
    for(int i=0;i<strlen(postfix);i++)
    {
        char k = postfix[i];
        if(isdigit(k))
        push(k-'0');
        else
        {
            int op1=pop(),op2=pop();
            switch(k)
            {
                case '+': push(op2+op1);break;
                case '-': push(op2-op1);break;
                case '*': push(op2*op1);break;
                case '/': push(op2/op1);break;
                case '^': push(pow(op2,op1));break;
            }
        }
    }
    return pop();
}

int main()
{
    printf("Enter the postfix expression\n");
    scanf("%s", postfix);
    int ans = calc();
    printf("\nAnswer is %d\n", ans);
    return 0;
}

