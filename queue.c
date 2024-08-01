#include<stdio.h>
#include<stdlib.h>
#define max 10

void main(){
static int queue[max], f=-1,r=-1,ch;
		do{	printf("\n 1 enq 2 deq 3 dis 4 peek");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					int n;
					scanf("%d",&n);
					enqueue(queue,n,&f,&r);
					break;
				case 2:
					dequeue(queue,&f,&r);
					break;
				case 3:
					display(queue,&f,&r);
					break;
				case 4:
					peek(queue,&f,&r);
					break;
				case 5:
					return;
					}}while(f!=-1);
}
void enqueue(int queue[], int n, int *f, int *r)
{
	if(r==max-1)
	{printf("\n full");
	return;
	}
	if(*f==-1)
	*f=0;
	(*r)++;
	queue[*r]=n;
}
void dequeue(int queue[], int *f, int *r)
{
	if(*f==-1||*f>r)
	printf("\n empty");
	else{ (*f)++;
	if(*f>*r)
	*f=-1;
	}}
void display(int queue[], int *f, int *r)
{
	if(*f==-1||*f>*r)
	printf("\n empty");
	else
	for(int i=*f;i<=*r;printf("%d",queue[i++]));
	printf("\n");
}
void peek(int queue[], int *f, int *r)
{
	if(*f==-1|*f>*r)
	printf("\n empty");
	else
	printf("%d \n",queue[*f]);
}

	
	

