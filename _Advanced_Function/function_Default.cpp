#include<iostream>
using namespace std;

//1.如果某个位置有默认值，这个位置的右边必须都有默认值

int func(int a,int b,int c=10){
    return a+b+c;
}
//int 为占位参数，调用时必须填补该位置 用于运算符重载
// 占位参数可以有默认值
void func1(int a,int=10);

//函数重载须满足条件
//1.同一作用域下
//2.函数名称相同
//3.函数参数类型不同、或个数不同、或顺序不同
//注意：函数的返回值不可以作为重载条件

//引用作为函数重载条件
void fun(int &a){
    cout<<"fun(int &a)"<<endl;
}
void fun(const int &a){
    cout<<"fun(const int &a)"<<endl;
}
//函数重载作为默认参数
void func2(int a,int b){
    cout<<"func2(int a,int b)"<<endl;
}
//参数默认值会造成编译器重载报错
// void func2(int a,int b=10){
//     cout<<"func2(int a,int b=10)"<<endl;
// }
int main(){
    int val=0;
    int a=11,b=11;
    int c=11;
    val = func(a,b,c);
    cout<<val<<endl;
    fun(val);
    fun(10);//10作为常引用
    func2(a,b);
    return 0;
}

