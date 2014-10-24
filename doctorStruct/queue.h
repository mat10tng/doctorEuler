#ifndef QUEUE_T_H
#define QUEUE_T_H
//Queue author Tuan Nguyen
typedef struct queue_t queue_t;
queue_t* new_queue();
void queue_add(queue_t* queue, void* data);
void* queue_rmv(queue_t* queue);
void queue_free(queue_t* queue);
size_t queue_size(queue_t* queue);
#endif