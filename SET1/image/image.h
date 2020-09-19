#include<iostream>
class Image
{
private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;
public:
    Image();
    Image(int,int,int,int);
    Image(const Image &);
    int scale(int,int);
    int resizee(int,int);
    int movee(int,int);
    int getm_x();
    int getm_y();
    int getm_height();
    int getm_width();
    void display();
};
