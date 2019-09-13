
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_priority_queue.h"
#include "job.h"

struct PRIORITYqueue makePRIORITY(){
    struct PRIORITYqueue queue;
    queue.size=0;
    reutrn queue;
};

bool emptyPRIORITY(struct PRIORITYqueue *queue){
    return queue->size==0;
}

void addPRIORITY(struct PRIORITYqueue *queue, struct job j){
    if(queue->size+1 > lENGHT-1){
        printf("ERROR PRIORITY QUEUE OVERLOAD");
        exit(-1);
    }
    int x=0;
    while(j.time > queue->list[x].time && x < queue->size){
        i++
    }
    for(int i=(*queue).size; i>x; i--){
        queue->list[i+1] = queue->list[i];
    }

    queue->list[i]=j;
    queue->size++;
}

struct job removePRIORITY(struct PRIORITYqueue *queue){
    struct job j= queue->list[0];
    for(int x=0; x<queue->size-1; x++){
        queue->list[x]=queue->list[x+1];
    }
    queue->size--;
    return j;
};
