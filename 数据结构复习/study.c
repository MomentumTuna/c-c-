#include <stdio.h>
//我现在需要一个函数，这个函数的参数是一个指针，这个指针指向一个整数，我需要在这个函数中使这个整数的值加1，然后在主函数中输出这个整数的值。
//请你帮我写一下这个函数。
//q：&代表什么意思？
//q:segmentation fault是什么意思
//

void add(int *p)
{
    *p = *p + 1;
}
int main()
{
    int a = 10;
    int *p = &a;
    /*int* b=NULL;
    *b=a;*/
    add(p);
    printf("%d\n", a);
    //printf("%d\n",*b);
    return 0;
}