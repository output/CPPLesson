//
//  main.cpp
//  L02NS
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

#include "Person.h"
using namespace babybus;

// C++ 命名空间

int main(int argc, const char * argv[])
{

    
    Person *p = new Person();
    p->sayHello();
    
    return 0;
}

