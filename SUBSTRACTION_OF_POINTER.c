#include<stdio.h>
int main()
{int a[]={1,2,3,4,5};
int *ptr1=a;
int *ptr2=a+4;
printf("%d",*(ptr1+1));
printf("%d\n",(ptr2-ptr1));
return 0;

}