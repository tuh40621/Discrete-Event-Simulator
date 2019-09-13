
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include <stdio.h>
#include "random.h"
#include "FIFOqueue.h"
#include "PRIORITYqueue.h"
#include "job.h"

int testerPQ(){
    struct PRIORITYqueue testPQ = makePRIORITY();
    for(int i=0; i<50; i++){
        int rand = random(1,1000);
        struct job j= createJob("job", rand, Exit, 0);
        addPRIORITY(&testPQ, j);
    }
    int max=0;
    for(int i=0; i<10; i++){
        struct job j= removePRIORITY(&testPQ);
        print("%d\n" j.time);
        man=max>j.time ? max:j.time;
        if(max!=j.time){
            printf("Priority queue test failed");
        }
    }
    return 0;
}
