//%p memory address var
//& ==> to access the address
//pointer declaration *
#include<stdio.h>
int main(){
    int a=10;
    int b=a;
    printf("value of b = %d\n",b);
    printf("Address of b = %p\n",b);//pointer variable address
    printf("Address of b = %p\n",&b);
      printf("Address of a = %p\n",a);
    printf("Address of a = %p\n",&a);
}