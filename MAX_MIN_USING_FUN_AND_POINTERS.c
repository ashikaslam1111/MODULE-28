#include<stdio.h>
void func(int num1,int num2,int* p,int* q);
int main()
{
    int a=15;
    int b=20;
    int large;
    int small;
    func(a,b,&large,&small);
    printf("big = %d and small = %d",large,small);
    return 0;
}
void func(int num1,int num2,int* p,int* q)
{
    *p=num1>num2?num1:num2;
    *q=num1<num2?num1:num2;
}
