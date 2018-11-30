#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	listel *list=init();
	printf("%i\n\n",get_last_index(list));
	print(list);
	add_l(&list,0,0);
	print(list);
	add_l(&list,1,0);
	print(list);
	add_l(&list,2,0);
	print(list);
	add_l(&list,3,2);
	print(list);
	printf("last index = %i\n",get_last_index(list));
	add_l(&list,4,3);
	print(list);
	add_l(&list,5,5);
	print(list);
	printf("%i\n",remove_l(&list,0));
	print(list);
	printf("%i\n",remove_l(&list,4));
	print(list);
	printf("%i\n",remove_l(&list,2));
	print(list);
	append_l(&list,7);
	print(list);
	clear(&list);
	print(list);
	return 0;
}