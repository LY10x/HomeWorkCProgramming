#include <stdio.h>
#include "processes.h"
#include <string.h>

struct Process processes[5];
int processesCount = 0;

static int nextId = 1;

static int nextPorcessid(){
if (nextId > 5) {
        return 0; 
    }
    return nextId++;
}

int createNewProcess(const char* processName) {
    if (processesCount >= 5) {
        printf("Error: Max number of processes reached.\n");
        return 0;
    }

    int id = nextPorcessid();
    if (id == 0) {
        printf("Error: all ids are used up\n");
        return 0;
    }

    struct Process newProcess;
    newProcess.id = id;
    strncpy(newProcess.name, processName,29);

    processes[processesCount++] = newProcess;

    return id;
}

void stopProcess(int processId) {
    for (int i = 0; i < processesCount; ++i) {
        if (processes[i].id == processId) {
            for (int j = i; j < processesCount - 1; ++j) {
                processes[j] = processes[j + 1];
            }
            --processesCount;
            return;
        }
    }
    printf("Error: Invalid ID.\n");
}
