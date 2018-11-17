#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stackel *init()
{
	return NULL;
}

void push(stackel **s,int val)
{
	stackel *new=malloc(sizeof(stackel));
	(*new).next=*s;
	(*new).val=val;
	*s=new;
}

int pop(stackel **s)
{
	int res=(**s).val;
	stackel *old=*s;
	*s=(**s).next;
	free(old);
	return res;
}

void print(stackel *s)
{
	stackel *e=s;
	printf("> ");
	while(e){
		printf("%i ",(*e).val);
		e=(*e).next;
	}
	printf("|\n");
}