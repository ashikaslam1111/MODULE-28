#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("SORRY MEMORY ALLOCATION FAILED");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",ptr+i);
            printf("%d ",*(ptr+i));
        }
    }
    printf("\n");
    n=10;
    ptr=realloc(ptr,(n*sizeof(int)));
    if(ptr==NULL)
    {
        printf("SORRY MEMORY ALLOCATION FAILED");
    }
    else
    {
        for(int i=5; i<n; i++)
        {
            scanf("%d",ptr+i);
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}
