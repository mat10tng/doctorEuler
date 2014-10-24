//Stack author Shan Senanayake
typedef struct stack;
void push(stack* stack, void* data);
void* pop(stack* stack);
void free(stack* stack);
