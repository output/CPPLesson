//
//  main.cpp
//  L07Functions
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>
#include "Man.h"

// 实函数、虚函数、纯虚函数、函数重写



int main(int argc, const char * argv[])
{

    
//    多态
    Person *p = new Man(20);
    
//    在java中，调用的是Man中的sayHello, 但是在C++ 中调用的是Person的
//    解决方法，就是声明方法为virtual
    p->sayHello();
    p->eat();
    return 0;
}

