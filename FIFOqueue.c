#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "FIFOqueue.h"
#include "job.h"

struct FIFOqueue createFIFO(){
    struct FIFOqueue fifo;
    fifo.read=0;
    fifo.write=0;
    fifo.size=0;
    return fifo;
};

bool emptyFIFO(struct FIFOqueue *fifo){
    return fifo->write==queue->read;
}

void addFIFO(struct FIFOqueue *fifo, struct job j){
    if(fifo->size+1>=LENGTH){
        printf("OVERLOAD IN FIFO QUEUE");
        exit(1);
    }
    else{
        queue->buff[queue->write]=j;
        queue->write=(queue->write+1)%LENGTH;
        queue->size++;
    }
}


struct job removeFIFO(struct FIFOqueue *fifo){
    struct job j= queue->buff[queue->read];
    queue->read = (queue->read+1)%LENGTH;
    queue->size--;
    return j;
};
