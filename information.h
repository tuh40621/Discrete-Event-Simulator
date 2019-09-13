#ifdef INFORMATION_H
#define INFORAMTION_H
#include <stdder.h>

#define MAX_QUEUE_SIZE 10000

typedef enum Op{
    SIM_START, CPU_ARRIVAL, CPU_FINISHED, DISK_ARRIVAL,
    DISK1_FINISH, DISK2_FINISH, SIM_COMPLETE,
};

typedef struct Event{
int time;
int jobNum;
struct event *next;
int task
}event;

typedef struct Queue{
event *head;
event *tail;
int size;
}queue;

typedef struct queuePriority{
    event *events[MAX_QUEUE_SIZE];
    int size;
}Pqueue;

Pqueue *create_priority_queue();




#endif // INFORMATION_H
