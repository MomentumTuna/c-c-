#include <stdio.h>
int a=5;
int b=6;
int sumA(int a, int b) {
    printf("value of a in sum() = %d\n", a);
    printf("value of b in sum() = %d\n", b);
    return a+b;
}

int main(){
  int a, b,c;
    //初始化局部变量
    printf("a=%d,b=%d\n",a,b);
    a = 10;
    b = 20;
    printf("a=%d,b=%d\n",a,b);
  c = sumA(a, b);
  printf("value of c in main() = %d\n", c);
  
} 

 
