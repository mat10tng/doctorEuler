#include <stdio.h>
//Queue author Tuan Nguyen
typedef struct queue_t queue_t;
typedef struct node_t node_t;
struct node_t{
	node_t* prev;
	void* data;
}
struct queue_t{
	node_t* first;
	node_t* last;
	size_t size;
}queue_t
queue_t* new_queue()
{
	queue_t* queue;
	queue = malloc(sizeof(queue_t));
	if(queue == NULL){
		fprintf(stderr,"No memory for new queue");
		exit(1);
	}
	// make a null node as top
	queue->first = NULL;
	queue->last = NULL;
	queue->first->prev = queue->last;
	// the queue->last->prev will always point at the last element
	queue->last->prev = queue->first;
	queue->size = 0;
	return queue;
}
void queue_add(queue_t* queue, void* data)
{
	node_t* current;
	current = malloc(sizeof(node_t));
	if(current == NULL){
		fprintf(stderr,"No memory for new node");
		exit(1);
	}
	current->data = data;
	if(queue->size == 0){
		queue->first->prev = current;
	}
	current->prev = queue->last->prev;
	queue->last->prev = current
	queue->size++;
}
void* queue_rmv(queue_t* queue)
{
	node* current = queue->top->prev;
	node* prev = current->prev;
	void* data = current->data;

	queue->top->prev = prev;
	node_free(current);
	queue->size--;
	return data;
}
void queue_free(queue_t* queue)
{	
	//free all node;
	node_t* current = queue->top->next;
	node_t* next;
	while(current!= NULL){
		next = current->next;
		free(current);
		current = next;
	}
}
size_t queue_size(queue_t* queue){
	return queue->size;
}