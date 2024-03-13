#include<iostream>
using namespace std;

int main(){
    //指针在64位系统占用8字节
    //在32位系统占用4字节

    //空指针 指针变量p指向内存地址编号为0的空间
    //用于给指针变量初始化
    //空指针是不可以访问的

    // 野指针：指向非法命名空间的指针
    // int * p = NULL;
    // int *p = (int *)0x1100;

    int a=10,b=10;
    // 指向常量的指针/常量指针
    const int * p = &a; //指针指向可以改，指针指向的值不可以通过它修改
    // 常指针/指针常量
    int * const p1 = &a; //指向不可以修改，值可以修改
    // const既修饰指针又修饰常量
    const int * const p2 = &a;//指向和值都不可以修改
    cout<<"你好"<<endl;
    return 0;
}