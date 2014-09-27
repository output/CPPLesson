//
//  main.cpp
//  L06Super
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

#include "Man.h"

int main(int argc, const char * argv[])
{

    Man *m = new Man(21);
    
//    m->sayHello();
    
//    直接调用父类方法
    m->Person::sayHello();
    return 0;
}

