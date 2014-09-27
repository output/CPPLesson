//
//  main.cpp
//  L04CMethod
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

// 构造函数和析构函数

class Object {
public:
    Object(){
        printf("Create Object\n");
    };
    
    ~Object(){
        printf("Delete Object\n");
    }
};

void runObject(){
    {
        Object obj;
    }
    
    printf("Delete runObject\n");
}



int main(int argc, const char * argv[])
{

    
//    Object *obj = new Object();
//    delete obj;
    
    
//    执行默认函数，会自动调用析构函数[在作用域内，代码块]
//    Object obj;
    
    runObject();
    
    
    return 0;
}

