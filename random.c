
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

#define RAND_SIZE 256
#define SIZE 1000

void init_random(unsigned seed){

    static char rand_state[RAND_SIZE];
    initstate(seed, rand_state, RAND_SIZE);
}


int my_random(int low, int high){//low inclusive high exclusive
    return (int) (low + random() % (high - low));
}

bool chance(double p){
    double r = my_random(1,1001)/1000.0;
    return r < p;
}
