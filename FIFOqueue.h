
#ifdef FIFOQUEUE_h
#define FIFOQUEUE_h


#include "job.h"

#define LENGTH 500

struct FIFOqueue {
    struct job buff[LENGTH];
    int read;
    int write;
    int size;
};

bool emptyFIFO(struct FIFOqueue *queue);

struct FIFOqueue createFIFO();

void addFIFO(struct FIFOqueue *queue, struct job j1);

struct job removeFIFO(struct FIFOqueue *queue);

#endif // FIFOQUEUE_h
