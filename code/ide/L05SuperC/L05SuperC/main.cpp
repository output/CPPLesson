//
//  main.cpp
//  L05SuperC
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

#include "Man.h"

// 执行父类的构造方法

int main(int argc, const char * argv[])
{

    Man *m = new Man(20);
    printf("age: %d \n", m->getAge());
    return 0;
}

