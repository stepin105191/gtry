#include <iostream>
#include "image.h"
Image::Image():m_x(0), m_y(0), m_width(0),m_height(0)
{
}
Image::Image(int x, int y, int w, int h) :
  m_x(x), m_y(y), m_width(w),m_height(h)
{
}
Image::Image( const Image& ref):
    m_x(ref.m_x),
    m_y(ref.m_y),
    m_width(ref.m_width),
    m_height(ref.m_height)
    {
    }
    int Image:: scale(int x,int y)
    {
        return x,y;
    }
    int Image:: resizee (int w,int h)
    {
        m_height+=4;
        m_width+=4;
        return m_height,m_width;
    }
    int Image:: movee (int x,int y)
    {
        m_x+=8;
        m_y+=8;
        return m_x,m_y;
    }
    int Image:: getm_x()
    {
    return m_x;
    }
    int Image:: getm_y()
    {
    return m_y;
    }
    int Image:: getm_height ()
    {
    return m_height;
    }
    int Image:: getm_width ()
    {
    return m_width;
    }

    void Image:: display()
    {
    std::cout << m_x << "," << m_y << ","<< m_width<<","<< m_height<< "\n";
    }


