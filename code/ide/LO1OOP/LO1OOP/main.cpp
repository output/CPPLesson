//
//  main.cpp
//  LO1OOP
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

#include "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = new Person();
    p->sayHello();
    
    // 删除对象，内存回收 ， new 和 delete 成对出现
    delete p;
    
    return 0;
}

