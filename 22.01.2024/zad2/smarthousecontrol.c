#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char state = 0;
    int choice;
    int lampi4ka;
    int stop = 0;
    while(1)
    {
        if(stop) break;
        printf("\nInput an action\n");
        printf("1: sWITCH\n");
        printf("2: State\n");
        printf("3: Stop\n");
        printf("Input: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: {
                int numlam;
                printf("Lamp number to switch: ");
                scanf("%d",&lampi4ka);
            
                state ^= 1 << (lampi4ka - 1);
                lampi4ka = 1;
                break;
            
            case 2: {
                printf("The light is on in room/s\n");
                for(int i = 0; i < 8;i++)
                {
                    if(state & lampi4ka << i)
                    {
                        printf("%d ",i+1);
                    }
                }
                break;
            }
            case 3: {
                stop = 1;
            }
            
        }

    }
    return 0;
}
}