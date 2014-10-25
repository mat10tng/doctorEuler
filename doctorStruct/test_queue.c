#include <stdio.h>
#include "queue.h"
int main()
{
    int i=0;
    printf("1. Push to Queue\n");
    printf("2. Remove from Queue\n");
    printf("3. Free queue and Exit\n")
    printf("4. Exit\n");
    queue_t* queue = new_queue();
    while(1){
        printf(" Choose Option: \n");
        scanf("%d",&i);
        int* value = malloc(sizeof(int));
        if(value == NULL){
            fprintf(stderr,"No memory in main");
            exit(1);
        }
        switch(i){
            case 1:{
                printf("Enter a value to push into Queue:\n");
                scanf("%d",value);
                queue_push(queue,value);
                queue_print_int(queue);
                break;
                }
            case 2:{
                queue_rmv(queue);
                queue_print_int(queue);
                break;
                }
            case 3:{
                queue_free(queue);
                free(value);
                exit(0);
                }
            default:{
            printf("wrong choice for operation\n");
            }
        }
    }
}