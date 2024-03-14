#include<iostream>
using namespace std;
#define MAX 1000

struct Person{  
    //姓名
    string m_Name;
    //性别
    int m_Sex;
    //年龄
    int m_Age;
    //联系方式
    string m_Phone;
    //地址
    string m_Address;
};

struct Addressbooks
{
    //通讯录当且人数
    int m_Size=0;
    //通讯录内容
    struct Person people[MAX];
};

//菜单界面
void showMenu(){
    cout<<"*************************"<<endl;
    cout<<"***** 1、添加联系人 *****"<<endl;
    cout<<"***** 2、显示联系人 *****"<<endl;
    cout<<"***** 3、删除联系人 *****"<<endl;
    cout<<"***** 4、查找联系人 *****"<<endl;
    cout<<"***** 5、修改联系人 *****"<<endl;
    cout<<"***** 6、清空联系人 *****"<<endl;
    cout<<"***** 0、退出通讯录 *****"<<endl;
    cout<<"*************************"<<endl;
}

void addPerson(struct Addressbooks *abs){
    if(abs->m_Size==MAX){
        cout<<"通讯录已满，请删除联系人后再操作！"<<endl;
    }else{
        string name;
        int sex=0;
        int age=0;
        string phone;
        string address;

        cout<<"请输入联系人的姓名:";
        cin>>name;
        cout<<"请输入联系人的性别:"<<endl;
        cout<<"1---男"<<endl;
        cout<<"2---女"<<endl;
        
        while(true){
            cin>>sex;
            if(sex==1||sex==2){
                abs->people[abs->m_Size].m_Sex = sex; 
                break;    
            }else{
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }
        cout<<"请输入联系人的年龄:";
        while(true){
            cin>>age;
            if(age>=18){
                abs->people[abs->m_Size].m_Age = age; 
                break;    
            }else{
                cout<<"年龄必须满18岁，请重新输入！"<<endl;
            }
        }
        cout<<"请输入联系人的手机号:";
        while(true){
            cin>>phone;
            // int len_phone = phone.length(); 11
            int len_phone = phone.size(); //11
            // int len_phone = sizeof(phone); //32 固定为32位
            // cout<<sizeof(phone)<<endl;
            // cout<<sizeof(phone[0])<<endl;
            cout<<len_phone<<endl;
            if(len_phone==11){
                abs->people[abs->m_Size].m_Phone = phone; 
                break;    
            }else{
                cout<<"手机号必须为11位，请重新输入！"<<endl;
            }
        }
        cout<<"请输入联系人的地址:";
        cin>>address;
        abs->people[abs->m_Size].m_Address = address;
        abs->m_Size++;
        cout<<"添加成功"<<endl;
    }
    system("pause");
    system("cls");
}

void showPerson(struct Addressbooks * abs){
    if(abs->m_Size==0){
        cout<<"当前记录位空"<<endl;
    }else{
        for(int i=0; i<abs->m_Size; i++){
            cout<<"姓名："<<abs->people[i].m_Name<<"\t";
            cout<<"性别："<<(abs->people[i].m_Sex==1?"男":"女")<<"\t";
            cout<<"年龄："<<abs->people[i].m_Age<<"\t";
            cout<<"联系方式："<<abs->people[i].m_Phone<<"\t";
            cout<<"地址："<<abs->people[i].m_Address<<endl;
        }

    }
    system("pause");
    system("cls");

}

int main(){
    int select=0;//创建用户输入的变量
    struct Addressbooks abs;

    while(true){
        showMenu();
        cin>>select;
        switch(select){
            case 1: //添加联系人
                addPerson(&abs); //利用地址传递，可以修改实参
                break;
            case 2: //显示联系人
                break;
            case 3: //删除联系人
                break;
            case 4: //查找联系人
                break;
            case 5: //修改联系人
                break;
            case 6: //删除联系人
                break;
            case 0: //退出通讯录
                cout<<"欢迎下次使用！"<<endl;
                return 0;

        }

    }
    return 0;
}