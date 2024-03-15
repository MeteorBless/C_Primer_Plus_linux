#include <iostream>
using namespace std;

class Point
{
public:
    void setX(int x)
    {
        this->axis_x = x;
    }
    void setY(int y)
    {
        this->axis_y = y;
    }
    int getX()
    {
        return this->axis_x;
    }
    int getY()
    {
        return this->axis_y;
    }

private:
    int axis_x;
    int axis_y;
};
class Circle
{
public:
    void setRadius(int m_R)
    {
        this->m_R = m_R;
    }
    int getRadius()
    {
        return this->m_R;
    }
    void setCenter(Point & p){
        this->m_Center=p;
    }
    Point getCenter(){
        return this->m_Center;
    }
private:
    int m_R;
    Point m_Center;
};
void isInCircle(Circle &c, Point &p)
{
    int distance = (c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+
    (c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rDistance = c.getRadius()*c.getRadius();

    if(rDistance==distance){
        cout<<"点在圆上"<<endl;
    }else if(rDistance>distance){
        cout<<"点在圆内"<<endl;
    }else{
        cout<<"点在圆外"<<endl;
    }
}

int main()
{
    Point p;
    Circle c;
    Point center;

    center.setX(4);
    center.setY(4);
    c.setCenter(center);
    c.setRadius(5);
    p.setX(3);
    p.setY(3);
    isInCircle(c,p);

    return 0;
}