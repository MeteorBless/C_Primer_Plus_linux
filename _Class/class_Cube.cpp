#include <iostream>
using namespace std;

class Cube
{
public:
    void setWidth(int width)
    {
        this->width = width;
    }
    void setLength(int length)
    {
        this->length = length;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    int getWidth(){
        return this->width;
    }
    int getLength(){
        return this->length;
    }
    int getHeight(){
        return this->height;
    }
    int cal_Volume(){
        return width*length*height;
    }
    int cal_Area(){
        return 2*(width*length + width*height + length*height);
    }
    bool isSame(Cube &c2){
        if(this->width==c2.width&&this->height==c2.height&&this->length==c2.length){
            return true;
        }else{
            return false;
        }
    }

private:
    int width;
    int length;
    int height;
};

int cal_Volume(int a, int b, int c){
    return a*b*c;
}
int cal_Area(int a,int b, int c){
    return 2*(a*b + a*c + b*c);
}

bool isSame(Cube &c1, Cube &c2){
    if(c1.getWidth()==c2.getWidth()&&c1.getHeight()==c2.getHeight()&&c1.getLength()==c2.getLength()){
        return true;
    }else{
        return false;
    }       
}


int main()
{   
    Cube cube1;
    Cube cube2;
    cube1.setWidth(3);
    cube1.setLength(4);
    cube1.setHeight(5);
    cube2.setWidth(3);
    cube2.setLength(4);
    cube2.setHeight(5);
    cout<<"cube1的面积为："<<cube1.cal_Area()<<endl;
    cout<<"cube1的体积为："<<cube1.cal_Volume()<<endl;
    cout<<"cube1的面积为："<<cal_Area(cube1.getWidth(),cube1.getLength(),cube1.getHeight())<<endl;
    cout<<"cube1的体积为："<<cal_Volume(cube1.getWidth(),cube1.getLength(),cube1.getHeight())<<endl;
    bool ret = isSame(cube1,cube2); 
    bool ret1 = cube1.isSame(cube2);
    if(ret == true){
        cout<<ret<<"两个立方体相等"<<endl;
    }else{
        cout<<ret<<"两个立方体不相等"<<endl;
    }
    if(ret1 == true){
        cout<<ret1<<"两个立方体相等"<<endl;
    }else{
        cout<<ret1<<"两个立方体不相等"<<endl;
    }
    return 0;
}