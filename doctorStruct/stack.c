//Author Shan Senanayake
//UNDONe
#include 'stack.h'
#include <stdio.h>


typedef struct node node;
struct node{
	node* next;
	void* data;
}node;
struct stack{
	node* first;
	size_t size;
}stack;


stack* new_stack()
{
	stack* s = malloc(sizeof(stack));
	s->first = NULL;
	s->size = 0;
	return s;
}
void stack_push(stack* stack,void* data)
{
	if(stack->first == NULL)
	{
		node* n = malloc(sizeof(node));
		n->next = NULL;
		n->data = data;
		stack->first = n;
	}
	else
	{
		node* n = stack->first;
		node* n2 = malloc(sizeof(node));
		n2->next = n;
		n2->data = data;
		stack->first = n2;
	}
		stack->size++;
}
void* stack_pop(stack* stack)
{
	node* temp = stack->first;
	stack->first = temp->next;
	stack->size--;
	return temp->data;
}
void stack_free(stack* stack)
{
	node* p = stack->first;
	free(stack);
	while(p!=NULL)
	{
		node* temp = p->next;
		free(p);
		p =temp;
	}
}

int main(void)
{

	return 0;

}