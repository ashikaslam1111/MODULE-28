#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int* ptr;
    scanf("%d",&n);
    ptr=(int*)  malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("soory");
    }
    else
    {
        printf("ALL OK!!");
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
