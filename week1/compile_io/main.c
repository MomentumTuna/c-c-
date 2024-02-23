#include <stdio.h>
#include "function.h"
int main() {
    printf("please input the numbers:");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c=mul(a,b);
    printf("the result is %d",c);
    return 0;
}
