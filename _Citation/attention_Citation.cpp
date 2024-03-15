#include<iostream>
using namespace std;


//函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修饰形参

//引用做函数返回值
//用法：函数调用作为左值
//注意：不要返回局部变量引用
//下列是错误使用
// int & test01(){
//     int a = 10;
//     return a;
// }

int & test02(){
    static int a = 10;
    return a;
}
//const修饰形参，防止误操作
void show(const int & val){
    cout<<val<<endl;
}
int main(){
    int a = 10; // 引用必须要初始化 int &a;是错误操作
    int &b = a; //引用初始化后不可以改变
    int c = 20; 
    // b = c; //赋值操作，而不是更改引用
    c = b;
    cout<<"a="<<a<<"; b="<<b<<"; c="<<c<<endl;
    // int &ref = test01();
    // cout<<ref<<endl;
    int &ref = test02();
    cout<<ref<<endl;

    test02()=1000; //返回值为引用类型的调用可以作为左值
    cout<<ref<<endl;

    const int & ref1 = 10;  //引用必须引用一块合法的内存空间
    //加入const后ref1变为只读状态，不能修改
    show(ref1);
    return 0;
}