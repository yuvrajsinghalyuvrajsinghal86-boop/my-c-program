#include<stdio.h>
int main()
{
    int a,b,trump;
    printf("\n\n\t enter 2 number");
    scanf("%d%d",&a,&b);
    printf("\n\n\t *** before swaping ***");
    printf("\n\n\t the value of bis %d",a);
    printf("\n\n\t the value of bis %d",b);
    //logic of program
    trump = a;
    a     = b;
    b = trump; 
    printf("\n\n\t after swaping");
    printf("\n\n\t the value of a is %d",a);
    printf("\n\n\t the value of b is %d",b);
    return 0;
}
{
