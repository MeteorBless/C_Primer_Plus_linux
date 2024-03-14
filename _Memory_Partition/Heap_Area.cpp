#include<iostream>
using namespace std;

int * func(){
    //利用new关键字 可以将数据开辟到堆区
    int * p = new int(10);
    return p;
}
void test02()
{
    int * arr  = new int[10];//10代表数组有10个元素
    for(int i=0; i<10; i++){
        arr[i] = i + 100;
    }
    for(int i=0; i<10; i++){
        cout<<*(arr++)<<endl;
    }
    delete[] arr; //释放数组指针要加[]
}
int main(){
    // 在堆区开辟数据
    int *p = func();
    cout<<*p<<endl;
    delete p; //释放内存
    test02();
    return 0;
}