#include <stdio.h>
#include <string.h>

#define MAX 10


int main (void)
{
    int tasks = 0, taskPrt = 1;
    char todoTask [100];
    char fileOutput [100];

    FILE *fptr;
    fptr = fopen("./newUsers.txt", "w");

    printf("How many users:  ");
    scanf("%d", &tasks);

    for (int i = 1; i <= tasks; i++)
    {
        printf("\nEnter your task: ");
        scanf("%s", todoTask);

        fprintf(fptr, "%d: %s\n", taskPrt, todoTask);
        taskPrt++;
    }

    fclose(fptr);

    FILE *fptr2 = fopen("./newUsers.txt", "r");

    while (fgets(fileOutput, sizeof(fileOutput), fptr2) != NULL)
    {
        fileOutput[strlen(fileOutput) -1] = '\0';
        printf("%s\n", fileOutput);
    }
    return 0;
}