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
    {
        if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
            printf("Days=31\n");
        else if(mon==4||mon==6||mon==9||mon==11)
            printf("Days=30\n");
        else
            printf("Days=28\n");
    }
    return 0;
}
