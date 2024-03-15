#include<iostream>
#include<cstring>
using namespace std;
//C++面向对象的三大特性：封装、继承和多态
//封装的意义：1、将属性和行为作为一个整体，变现生活中的事务；2、将属性和行为加以权限控制
class Student{
    public:
        void setSName(string name){
            this->sName = name;
        }
        void setSID(int id){
            this->sID = id;
        } 
        void showStudent(){
            cout<<"姓名:"<<sName<<" 学号:"<<sID<<endl;
        }
    private:
        string sName;
        int sID;
};

//struct和class的区别
//struct默认访问权限为共有
//class默认访问权限为私有
//public 类内类外都可访问
//private 和 protected 类内可以访问，类外不可以访问
struct S1{
    int m_S;//默认为共有类型
};
class C1{
    int m_C;//默认为私有类型
};
//成员属性设置为私有的作用：将所有成员属性设置为私有，可以自己控制读写权限；对于写权限，可以检测书的有效性
int main(){
    Student s1;
    s1.setSName("张三");
    s1.setSID(10086);
    s1.showStudent();
    struct S1 struct_s1;
    struct_s1.m_S = 10; 
    cout<<struct_s1.m_S<<endl;
    C1 c1;
    // c1.m_C = 10;// 私有类型，类外不可访问

    return 0;
}