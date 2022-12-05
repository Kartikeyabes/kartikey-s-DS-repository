#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
int top=-1,front=0;
int stack[MAX];
void push(char);
void pop();
int main(){
    char s[MAX],b;
    
            printf("Enter the string:");
            gets(s);
            int size=strlen(s);
            
            for (int i = 0; s[i]!='\0' ; i++)
            {
                b=s[size-i-1];
                push(b);
            }
            for (int i = 0; i <(strlen(s)); i++)
            {
                printf("%c",stack[i]);
            }
            
}
void push(char a)
{
    top++;
    stack[top]  =  a;
}