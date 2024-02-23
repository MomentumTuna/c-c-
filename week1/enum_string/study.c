//
//  main.c
//  08-结构体
//
//  Created by VanZhang on 2022/5/17.
//

#include <stdio.h>


//定义一个 Books 结构体，类似于 iOS 中的 类
//q:结构体一定要放在头文件中吗？
//a:不一定，可以放在头文件中，也可以放在源文件中
//q:结构体的定义和声明有什么区别？
//a:定义是指明结构体的类型，声明是指明结构体的变量
//q:结构体的初始化有什么特点？
//a:结构体的初始化是按照结构体的成员顺序进行初始化的
//q:结构体的声明一定要在源文件的最上方吗
//a:不一定，可以放在任何地方，但是一般放在源文件的最上方
//q：结构体的成员可以是函数吗
//a:可以，但是一般不这样做
struct  Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    double rmb;
};



void test1(void) {
    // insert code here...
  /*
   //定义 结构体,且初始化一个 该类型的结构体的临时变量
   struct  Books{
       char title[50];
       char author[50];
       char subject[100];
       int book_id;
       double rmb;
   }  book = {"ObjC", "iOS", "C 语言", 666, 55.5};
   */
    struct Books book = {"ObjC", "iOS", "C 语言", 666, 55.5};
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\nrmb: %f\n", book.title,
             book.author, book.subject, book.book_id, book.rmb);
}


int main(int argc, const char * argv[]) {
    test1();
    
    return 0;
}


