#include <memory.h>
#include "job.h"

struct job makeJob(char name[],int time,enum jobType type, int arrive){
    struct job j;
    j.time = time;
    j.type = type;
    j.arrive = arrive;
    stpncpy(j.name,name,15);
    return j;
}

char *type_string(enum jobType type){
    switch (type){
        case CPU_Arrival:
            return "CPU_Arrival";
        case CPU_Continue:
            return "CPU_Continue";
        case CPU_Begin:
            return "CPU_Begin";
        case CPU_Finish:
            return "CPU_Finish";
        case Exit:
            return "Exit";
        case SIM_END:
            return "Simulation End";
    }
};
