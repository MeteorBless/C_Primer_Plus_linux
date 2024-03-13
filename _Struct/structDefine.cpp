#include<iostream>
#include<cstring>
using namespace std;
//1.创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student{
    //成员列表
    string name;
    int age;
    float score;
};


int main(){
    //2.通过学生类型创建具体学生
    //2.1 struct Student s1
    //2.2 struct Student s2 = {...}
    //2.3 在定义结构体时顺便创建结构体变量
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout<<"name:"<<s1.name<<" age:"<<s1.age<<" score:"<<s1.score<<endl;
    struct Student s2 = {"李四",19,100};
    cout<<"name:"<<s2.name<<" age:"<<s2.age<<" score:"<<s2.score<<endl;

    return 0;
}
