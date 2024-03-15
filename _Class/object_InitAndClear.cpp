#include <iostream>
using namespace std;
// 构造函数和析构函数 用于初始化和清理操作
// 一个对象或变量没有初始状态，对其使用后结果未知。
// 同样的使用完一个对象或变量，如果没有及时清理，也会造成一定的安全问题。

// 构造函数由编译器自动调用，无须手动调用；析构函数在对象销毁前系统自动调用，执行一些清理操作

// 构造函数和析构函数没有返回值也不写void
// 构造函数可重载，析构函数可自定义但不能重载

// 按参数分构造函数分为有参构造（默认构造）和无参构造
// 按类型分：普通构造和拷贝构造
class Person
{
public:
    Person()
    {
        cout << "Person 无参构造函数的调用" << endl;
    }
    Person(int age)
    {
        this->age=age;
        cout << "Person 有参构造函数的调用" << endl;
    }
    Person(const Person &p)
    {
        this->age = p.age;
        cout << "Person 拷贝构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        // cout<<this->age<<endl;
        return this->age;
    }

private:
    int age;
};

void test01()
{
    Person p; // 栈上数据，test01()执行完毕后释放
}
int main()
{
    // test01();//Person 构造函数的调用
    Person p;      // 默认构造函数调用 注意：调用默认构造函数时不要加();会被编译器认为是函数的声明
    Person p1(10); // 有参构造函数的调用 p1 = person(10);
    Person p2(p1); // 拷贝构造函数的调用 p2 = person(p1);
    Person(10); // 匿名对象，当前执行结束后，系统会立即回收掉匿名对象
    p.setAge(15);
    cout<<"p的年龄为"<<p.getAge()<<endl;//15
    cout<<"p1的年龄为"<<p1.getAge()<<endl;//10
    cout<<"p2的年龄为"<<p2.getAge()<<endl;//10
    cout<<&p<<endl;
    cout<<&p1<<endl;
    cout<<&p2<<endl;
    /*
    linux
    Person 构造函数的调用
    Person 析构函数的调用
    这里和windows窗口不太一样 win只有:Person 构造函数的调用
    析构函数调用看不到
    */
    return 0;
}