#include<iostream>
using namespace std;


// 错误操作，不要返回局部变量的地址
// int* func(){
//     int a = 10;
//     return &a;
// }
int main(){
// 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
    // int* p=func();
    // cout<<*p<<endl;
    return 0;
}