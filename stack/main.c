#include <stdio.h>
#include "stack.h"

int main()
{
	stackel *s=init();
	print(s);
	int a=-1,b=0,c=1;
	
	push(&s,a);
	print(s);
	
	push(&s,b);
	print(s);
	
	push(&s,c);
	print(s);
	
	pop(&s);
	print(s);
	
	pop(&s);
	print(s);
	
	pop(&s);
	print(s);
	
	return 0;
}