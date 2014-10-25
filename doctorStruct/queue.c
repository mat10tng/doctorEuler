#include <stdlib.h>

#include <string.h>
#include <stdio.h>
#include "queue.h"
//Queue author Tuan Nguyen
typedef struct queue_t queue_t;
typedef struct node_t node_t;

struct node_t{
	node_t* next;
	void* data;
};
struct queue_t
{	node_t* first;
	node_t* last;
	size_t size;
};

queue_t* new_queue()
{
	queue_t* queue;

	queue = malloc(sizeof(queue_t));
	if(queue == NULL){
		fprintf(stderr,"No memory for new queue");
		exit(1);
	}
	// make a null node as top
	queue->first = malloc(sizeof(node_t));
	if(queue->first == NULL){
		fprintf(stderr,"No memory for new node");
		exit(1);
	}
	queue->first->next = NULL;
	queue->first->data = NULL;
	queue->last = malloc(sizeof(node_t));
	if(queue->last == NULL){
		fprintf(stderr,"No memory for new node");
		exit(1);
	}
	queue->last->next = NULL;
	queue->last->data = NULL;
	queue->first->next = queue->last;
	queue->last->next = queue->first;
	queue->size = 0;
	return queue;
}
void queue_push(queue_t* queue, void* data)
{
	node_t* current;
	current = malloc(sizeof(node_t));
	if(current == NULL){
		fprintf(stderr,"No memory for new node");
		exit(1);
	}
	current->data = data;
	node_t* current_last = queue->last->next;
	current_last->next = current;
	queue->last->next = current;

	queue->size++;
}
void* queue_rmv(queue_t* queue)
{
	node_t* current_first = queue->first->next;
	void* data = current_first->data;
	queue->first->next = current_first->next;
	free(current_first);
	queue->size--;
	return data;
}
void queue_free(queue_t* queue)
{	
	//free all node;
	node_t* current = queue->first->next;
	node_t* next;
	while(current!= NULL){
		next = current->next;
		free(current);
		current = next;
	}
}
size_t queue_size(queue_t* queue)
{
	return queue->size;
}

//print_int 
void queue_print_int(queue_t* queue)
{
	size_t i;
	node_t* current = queue->first->next;
	printf("\n");
	for(i = 0;i<queue->size;i++){
		printf("%d ",*((int*)current->data));
		current = current->next;
	}
	printf("\n");
}