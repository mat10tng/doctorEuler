//Stack author Shan Senanayake
typedef struct stack stack;
stack* new_stack();
void stack_push(stack* stack, void* data);
void* stack_pop(stack* stack);
void stack_free(stack* stack);
