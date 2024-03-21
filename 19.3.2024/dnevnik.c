#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

#define CHECK(arr)                           \
    if (arr == NULL)                         \
    {                                        \
        printf("Error allocating memory\n"); \
        exit(1);                             \
    }

char *readLine(void)
{
    char c;
    int size = 0;
    char *line = NULL;

    do
    {
        size++;
        c = getchar();

        line = realloc(line, size * sizeof(char));
        CHECK(line)

        line[size - 1] = c;

        if (size > MAX_SIZE)
        {
            printf("\nError too big name");
            exit(1);
        }

    } while (c != '\n');

    line[size - 1] = '\0';

    return line;
}

int main()
{
    int subjCount;
    do
    {
        printf("\nsubjects:");
        scanf("%d", &subjCount);
        getchar();
    } while (subjCount <= 0);

    char **subjects = (char **)calloc(subjCount, sizeof(char *));
    CHECK(subjects)

    for (int i = 0; i < subjCount; i++)
    {
        printf("\nsubject(%d): ", i + 1);
        subjects[i] = readLine();
    }

    char **students = NULL;
    float **grades = NULL;
    int studentsCount = 0;
    int choice = 0;
    int stop = 0;

    while (1)
    {
        if (stop)
            break;
        printf("\nInput an action\n");
        printf("1: new student\n");
        printf("2: show student's grades\n");
        printf("3: Stop\n");
        printf("Input: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            studentsCount++;

            students = (char **)realloc(students, studentsCount * sizeof(char *));
            CHECK(students)

            printf("\nEnter student name: ");
            getchar(); // Consume newline character
            students[studentsCount - 1] = readLine();

            grades = (float **)realloc(grades, studentsCount * sizeof(float *));
            CHECK(grades)

            grades[studentsCount - 1] = (float *)calloc(subjCount, sizeof(float));
            CHECK(grades[studentsCount - 1])

            for (int j = 0; j < subjCount; j++)
            {
                do
                {
                    printf("\ngrade for %s = ", subjects[j]);
                    scanf("%f", &grades[studentsCount - 1][j]);

                } while (grades[studentsCount - 1][j] < 2 || grades[studentsCount - 1][j] > 6);
            }

            break;
        }
        case 2:
        {
            printf("%15c", ' ');
            for (int i = 0; i < subjCount; i++)
            {
                printf("%15s", subjects[i]);
            }
            printf("\n");
            for (int i = 0; i < studentsCount; i++)
            {
                printf("%15s", students[i]);
                for (int j = 0; j < subjCount; j++)
                {
                    printf("%15.2f", grades[i][j]);
                }

                printf("\n");
            }

            break;
        }
        case 3:
        {
            for (int i = 0; i < subjCount; i++)
            {
                free(subjects[i]);
            }
            free(subjects);

            for (int i = 0; i < studentsCount; i++)
            {
                free(students[i]);
                free(grades[i]);
            }
            free(students);
            free(grades);

            stop = 1;
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
