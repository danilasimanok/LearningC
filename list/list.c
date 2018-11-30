#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* Создание списка. */
listel *init()
{
	return NULL;
}

/* Добавление элемента в произвольное место списка. */
void add_l(listel **l, int val, int pos)
{
	if(!pos){
		listel *new=malloc(sizeof(listel));
		new->val=val;
		new->next=*l;
		*l=new;
	}else{
		listel *prev=*l;
		listel *cur=(*l)->next;
		int i=1;
		while(pos!=i++){
			prev=cur;
			cur=cur->next;
		}
		prev->next=malloc(sizeof(listel));
		prev->next->val=val;
		prev->next->next=cur;
	}
}

/* Извлечение элемента из произвольного места списка. */
int remove_l(listel **l, int pos)
{
	if(!pos){
		listel *cur=*l;
		*l=(*l)->next;
		int res=cur->val;
		free(cur);
		return res;
	}else{
		listel *prev=*l;
		listel *cur=(*l)->next;
		int i=1;
		while(pos!=i++){
			prev=cur;
			cur=cur->next;
		}
		prev->next=cur->next;
		int res=cur->val;
		free(cur);
		return res;
	}
}

/* Вывод списка на экран. */
void print(listel *l)
{
	printf("[");
	while(l){
		printf("%i, ",l->val);
		l=l->next;
	}
	printf("]\n");
}

/* Получить номер последнего ненулевого элемента списка;
 * Если список пуст, вернет (-1).
 */
int get_last_index(listel *l)
{
	int i=-1;
	while(l){
		i++;
		l=l->next;
	}
	return i;
}

/* Очистить список. */
void clear(listel **l)
{
	while(-1!=get_last_index(*l))
		remove_l(l,0);
}

/* Добавить элемент в конец списка. */
void append_l(listel **l, int val)
{
	add_l(l,val,get_last_index(*l)+1);
}