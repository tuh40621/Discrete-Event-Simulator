#ifndef PRIORITYQUEUE_h
#define PRIORITYQUEUE_h

#include "job.h"

#define LENGTH 2000

struct PRIORITYqueue{
    int size;
    struct jobs list[LENGTH];
};

struct PRIORITYqueue makePRIORITY();

void addPRIORITY(struct PRIORITYqueue *queue, struct job j);

bool emptyPRIORITY(struct PRIORITYqueue *queue);

struct job removePRIORITY(struct PRIORITYqueue* queue);



#endif // PRIORITYQUEUE_h
