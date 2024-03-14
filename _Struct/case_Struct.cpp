#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;

struct Student
{
    //姓名
    string sName;
    int sScore;
};


struct Teacher
{
    string tName;
    struct Student stuArr[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len){
    string nameSeed = "ABCDE";
    for(int i=0; i<len; i++){
        tArray[i].tName =  "Teacher_";
        tArray[i].tName += nameSeed[i];
        cout<<"第"<<i+1<<"个教师的名字是"<<tArray[i].tName<<endl;
        for(int j=0; j<5;j++){
            tArray[i].stuArr[j].sName = "Student_";
            tArray[i].stuArr[j].sName += nameSeed[j];
            tArray[i].stuArr[j].sScore = rand()%60+40;
            cout<<"第"<<j+1<<"个学生的名字是"<<tArray[i].stuArr[j].sName<<" "<<tArray[i].stuArr[j].sScore<<endl;
        }
    }
}

struct Hero{
    string hName;
    int hAge;
    string sex;
};

void bubbleSort(struct Hero *heros, int len){
    for(int i=0; i<len-1;i++){
        for(int j=0; j<len-i-1;j++){
            if(heros[j].hAge>heros[j+1].hAge){
                int temp = heros[j].hAge;
                string temp1 = heros[j].hName;
                string temp2 = heros[j].sex;
                heros[j].hAge = heros[j+1].hAge;
                heros[j].hName = heros[j+1].hName;
                heros[j].sex = heros[j+1].sex;

                heros[j+1].hAge = temp;
                heros[j+1].hName = temp1;
                heros[j+1].sex = temp2;

            }
        }
    }
}
// *heros heros[]
void printHeros(struct Hero *heros, int len){
    for(int i=0;i<len;i++){
        cout<<heros[i].hName<<", "<<heros[i].hAge<<", "<<heros[i].sex<<endl;
    }
}

int main(){

    //随机数种子
    srand((unsigned int)time(NULL));
    struct Teacher tArr[3];
    int len = sizeof(tArr)/sizeof(tArr[0]);
    allocateSpace(tArr,len);

    struct Hero heros[5]={{"刘备",23,"男"},
                        {"关羽",22,"男"},
                        {"张飞",20,"男"},
                        {"赵云",21,"男"},
                        {"貂蝉",19,"女"}};
    int lenHero = sizeof(heros)/sizeof(heros[1]);
    printHeros(heros,lenHero);
    bubbleSort(heros,lenHero);
    printHeros(heros,lenHero);


    return 0;
}