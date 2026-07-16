#include <stdio.h>
int main()
{
    int arr[7],i;
    printf("\n\n\t enter areaye eliment:-");
    for(i=0;i<7;i++)
    {
        printf("\n\n\t  at index no[%d] :-",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\t the num divide by 3 & 5 & 7 are  ");
    for(i=0;i<7;i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0 && arr[i]%7==0)
        {
            printf("\n\n\t %d",arr[i]);
        }
    }
    return 0;
}
