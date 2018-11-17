typedef struct stackel{
	int val;
	struct stackel *next;
}stackel;

stackel *init();
void push(stackel **s,int val);
int pop(stackel **s);
void print(stackel *s);