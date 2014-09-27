//
//  main.cpp
//  L10Operator
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>
using namespace std;

// 运算符重载

class Point {
private:
    int x;
    int y;
    
public:
    
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return this->x;
    }
    
    int getY(){
        return this->y;
    }
    
    void add(Point p){
        add(p.getX(), p.getY());
    }
    
    void add(int x, int y){
        this->x += x;
        this->y += y;
    }
    
//    运算符重载
    void operator +=(Point p){
        add(p);
    }
};

int main(int argc, const char * argv[])
{
    
//    值对象方式
    Point p(10,10);
//    p.add(Point(12,12));
    p+= Point(12, 12);
    std::cout << p.getX() << endl;
    
//    指针方式
    Point *p1 = new Point(10, 10);
    (*p1)+= Point(5, 5);
    std::cout << p1->getX() << endl;
   
    return 0;
}

