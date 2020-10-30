#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mon;
    printf("Give the number of month\n");
    scanf("%d",&mon);
    if(mon<1 || mon>12)
        printf("There is not such a month\n");
    else
