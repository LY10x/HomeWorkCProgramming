#ifndef PROCESSES_H
#define PROCESSES_H

struct Process {
    int id;
    char name[30];
};

extern struct Process processes[5];

extern int processesCount;

int createNewProcess(const char* processName);

void stopProcess(int processId);

#endif