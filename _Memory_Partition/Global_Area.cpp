#include<iostream>
#include<cstring>
using namespace std;
//创建全局变量
int a1=10;
int b1=20;
const int c1=30;

int main(){

    //创建局部变量
    int a=10;
    int b=20;
    const int c = 30;
    
    //静态变量
    static int s_a = 10;
    static int s_b = 20;
    const static int s_c= 30;
    
    string nihao = "hello world!";
    cout<<"局部变量a的地址为："<<&a<<endl;
    cout<<"局部变量b的地址为："<<&b<<endl;
    cout<<"全局变量a的地址为："<<&a1<<endl;
    cout<<"全局变量b的地址为："<<&b1<<endl;
    cout<<"静态变量a的地址为："<<&s_a<<endl;
    cout<<"静态变量b的地址为："<<&s_b<<endl;
    cout<<"字符串常量的地址为："<<&"hello world!"<<endl;
    cout<<"全局常量c的地址为："<<&c1<<endl;
    cout<<"局部常量c的地址为："<<&c<<endl;
    cout<<"局部静态常量c的地址为："<<&s_c<<endl;

    cout<<sizeof(nihao)<<endl;
    cout<<(nihao).size()<<endl;
    cout<<(nihao).length()<<endl;
    /*全局和静态相近
    离局部都远
    */

    /*
    局部变量a的地址为：0x7fffffffde4c
    局部变量b的地址为：0x7fffffffde50
    全局变量a的地址为：0x555555559010
    全局变量b的地址为：0x555555559014
    静态变量a的地址为：0x555555559018
    静态变量b的地址为：0x55555555901c
    字符串常量的地址为：0x555555557010
    全局常量c的地址为：0x555555557008
    局部常量c的地址为：0x7fffffffde54
    局部静态常量c的地址为：0x55555555700c
    */


    return 0;
}