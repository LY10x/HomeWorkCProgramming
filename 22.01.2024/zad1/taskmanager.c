#include "processes.h"
#include <stdio.h>

void printProcesses() {
    printf("Processes:\n");
    for (int i = 0; i < processesCount; ++i) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

int main() {
    int choice;

    do {
        printf("\nTask Manager Menu:\n");
        printf("1. Create a new process\n");
        printf("2. Display all processes\n");
        printf("3. Stop a process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char name[30];
                printf("Enter the name of the process: ");
                scanf("%s", name);
                int processId = createNewProcess(name);
                if (processId != 0) {
                    printf("Process created successfully. ID: %d\n", processId);
                }
                break;
            }
            case 2:
                printProcesses();
                break;
            case 3: {
                int processId;
                printf("Enter the ID of the process to stop: ");
                scanf("%d", &processId);
                stopProcess(processId);
                break;
            }
            case 4:
                printf("Exiting Task Manager.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
