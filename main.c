//Steven McFarland's code

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <memory.h>

#include "random.h"
#include "job.h"
#include "FIFOqueue.h"
#include "PRIORITYqueue.h"


/* global variables that will be used throughout the program */
/*                                                           */
int SEED;
int INIT_TIME=0;
int FIN_TIME=10000;
int ARRIVE_MIN;
int ARRIVE_MAX;
float QUIT_PROB;
int CPU_MIN;
int CPU_MAX;
int DISK1_MIN;
int DISK1_MAX;
int DISK2_MIN;
int DISK2_MAX;

int main(){
    /*
    struct PRIORITYqueue queueP=makePRIORITY();
    struct FIFOqueue queueCPU = createFIFO();
    struct FIFOqueue queueD1 = createFIFO();
    struct FIFOqueue queueD2 = createFIFO();*/
    printf("hello world");
    tester();

}

