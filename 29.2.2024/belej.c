#include <stdio.h>
#include <stdlib.h>

int avrgr(int gradesCount, float *grades){
    float * averageGrade = (float *)malloc(sizeof(float));
    if (averageGrade == NULL) {
        printf("Error allocating memory");
        return 1;
    }

    float sum = 0;
    for (int i = 0; i < gradesCount; i++){
        sum += grades[i];
    }

    *averageGrade = sum / gradesCount;
    printf("Average grade:%f\n", *averageGrade);
    return 0;
    free(averageGrade);

}


int main()
{
     int gradesCount = 0;
     int stop = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);

  //Allocating memory for gradesCount grades of type float:
  float * grades = (float *)malloc(sizeof(float) * gradesCount);
  if (grades == NULL) {
    printf("Error allocating memory");
    return 1;
  }

  for(int i = 0; i < gradesCount; i++) {
    do{
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }while(grades[i]<2 || grades[i] > 6);
  }
  int choice =0;

    while(1){
        if(stop) break;
        printf("\nInput an action\n");
        printf("1: Average\n");
        printf("2: New Grade\n");
        printf("3: Delete\n");
        printf("4: Stop\n");
        printf("Input: ");
        scanf("%d",&choice);

        
         switch(choice){
            case 1: {
                avrgr(gradesCount, grades);
                break;
            }
            case 2:{
                gradesCount++;
                grades = (float *)realloc(grades, sizeof(float) * gradesCount );
                do{
                printf("Enter new grade: ");
                scanf("%f", &grades[gradesCount - 1]); 
                }while(grades[gradesCount - 1]<2 || grades[gradesCount - 1] > 6);
                break;
            }
            case 3:{
                if(gradesCount != 0){
                gradesCount--;
                grades = (float *)realloc(grades, sizeof(float) * gradesCount );
                }else{
                    printf("there are no grades to be removed");
                }
                break;
            }
            case 4: {
                stop = 1;
                free(grades);
                free(gradesCount);
            }
            default:{
                printf("There is no such option");
            }
        }
    }
    }

