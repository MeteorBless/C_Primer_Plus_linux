#include<iostream>
#include<cstring>
using namespace std;
//1.创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student{
    //成员列表
    string name;
    int age;
    float score;
}s3;
    //2.3 在定义结构体时顺便创建结构体变量

//结构体数组
//1、定义结构体
//2.创建结构体数组
//3.给结构体数组中的元素赋值
//3.遍历结构体数组

//结构体指针
//结构体嵌套
struct Teacher{
    int id;
    string name;
    int age;
    Student stu; //嵌套结构体
};

void printStudent(struct Student s){
    cout<<"name:"<<s.name<<" age:"<<s.age<<" score:"<<s.score<<endl;
}
void printStudent(struct Student * p){
    cout<<"name:"<<p->name<<" age:"<<p->age<<" score:"<<p->score<<endl;
}

int main(){
    //2.通过学生类型创建具体学生
    //2.1 struct Student s1
    //2.2 struct Student s2 = {...}
    //2.3 在定义结构体时顺便创建结构体变量
    //创建结构体变量是struct可以省略
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout<<"name:"<<s1.name<<" age:"<<s1.age<<" score:"<<s1.score<<endl;
    Student s2 = {"李四",19,100};
    cout<<"name:"<<s2.name<<" age:"<<s2.age<<" score:"<<s2.score<<endl;
    s3.name = "赵六";
    s3.age = 18;
    s3.score = 100;
    cout<<"name:"<<s3.name<<" age:"<<s3.age<<" score:"<<s3.score<<endl;

    //结构体数组
    struct Student stuArr[3]={
        {"李四",19,100},
        {"李三",19,100},
        {"李号",19,100}
    };
    stuArr[2].name = "礼物";
    for(int i=0; i<3;i++){
        cout<<"name: "<<stuArr[i].name<<"age: "<<stuArr[i].age<<"score: "<<stuArr[i].score<<endl;
    }

    //通过指针指向结构体变量 ->箭头访问结构体变量
    Student *p  = &s1;
    cout<<"name:"<<p->name<<" age:"<<p->age<<" score:"<<p->score<<endl;

    Teacher t;
    t.id = 100;
    t.name  = "老王";
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;
    cout<<t.name<<"\t"<<t.stu.name<<endl;

    //结构体做函数参数
    //将学生传入到一个函数的参数
    printStudent(s1);
    printStudent(&s1);
    //结构体中用const来防止误操作
    return 0;
}
