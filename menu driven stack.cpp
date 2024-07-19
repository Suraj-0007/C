#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20

int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        printf("\n poped element is %d",del);
        top=top-1;
    }
}
void peep()
{
	int item=NULL;
	if(top<=-1){
		printf("\nStack underflow.no elements in the stack.");
	}
	else{
		item=s[top];
		s[top]=NULL;
		top=top-1;
	}
	printf("%d",item);
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Peep");
        printf("\n 4.Display");
        printf("\n 5.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
        	display();
        	break;
        case 5:
            exit(0);
            break;
        }
    }
    while(1);

    return 0;
}
