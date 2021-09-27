#include <stdio.h>

#define MAX 10

int main (void)
{
    int users = 0;
    char userName [10];
    FILE *fptr;
    fptr = fopen("./newUsers.txt", "w");

//    printf("How many users:  ");
//    scanf("%d", &users);

    printf("\nPlease enter the first user name: ");
//    scanf("%[^\n]s",userName);
    fgets(userName, MAX, stdin);

    fprintf(fptr, "user: %s", userName);

    return 0;
}