#ifdef JOB_h
#define JOB_h

enum Job_Type{
    CPU_Arrival,CPU_Continue, CPU_Begin,CPU_Finish,
    //Disk1_Arrival,Disk1_Begin,Disk1_Finish,
    //Disk2_Arrival,Disk2_Begin,Disk2_Finish,
    Exit, SIM_END
};

struct job{
    int time;
    enum jobType type;
    char name[15];
    int arrive;

};

char *type_string(enum jobType type);

struct job makeJob(char name[],int time,enum jobType type,int arrive);

#endif // JOB_h
