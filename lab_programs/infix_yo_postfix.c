#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>
#define max 50

char infix[max], stack[max], postfix[max];
int top=-1;

void push(char ch)
{
    if(top==max-1)
    return;
    stack[++top]=ch;
}

char pop()
{
    if(top==-1){
    return -1;}
    return stack[top--];
}

int precedenc(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':
            return 1; 
        case '/':
        case '*':
            return 2; 
        case '^':
            return 3;
        case '(':
        case ')':
            return 0;
    }
    return -1;
}

void intopost(char* infix, char* postfix)
{
    int j=0; char k;
    for(int i=0;i<strlen(infix);i++)
    {
        k = infix[i];
        if(isalnum(k))
        postfix[j++]=k;
        else
        {
            switch(k)
            {
                case '(':
                push(k);break;
                case ')':
                while((k=pop())!='(')
                {
                    postfix[j++]=k;
                }
                break;
                case '+':
                case '-':
                case '/':
                case '*':
                case '^':
                while(precedenc(k)<=precedenc(stack[top]))
                {
                    postfix[j++]=pop();
                }
                push(k);
            }
        }
        
    }
    
    while(top!=-1)
        {
            postfix[j++]=pop();
        }
        postfix[j]='\0';
}

int main()
{
    printf("Enter the infix expression\n");
    scanf("%s", infix);
    intopost(infix,postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
