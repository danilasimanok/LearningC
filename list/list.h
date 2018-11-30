typedef struct list_element{
	int val;
	struct list_element *next;
}listel;

listel *init();
void add_l(listel **l, int val, int pos);
int remove_l(listel **l, int pos);
void print(listel *l);
void clear(listel **l);
int get_last_index(listel *l);
void append_l(listel **l, int val);