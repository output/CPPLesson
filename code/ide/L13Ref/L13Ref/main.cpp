//
//  main.cpp
//  L13Ref
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

// C++ 引用

class Point {
    
private:
    int x, y;
public:
    
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }
    
//    void add(Point p){
//        this->x += p.x;
//        this->y += p.y;
//    }
    
    
//    这种方法，性能较好，不做内存拷贝
    void add(Point &p){
        this->x += p.x;
        this->y += p.y;
    }
    
};

int main(int argc, const char * argv[])
{

    Point p(10, 10);
    Point p1(5, 5);
    p.add(p1);
    
    printf("%d\n", p.getX());
    return 0;
}

