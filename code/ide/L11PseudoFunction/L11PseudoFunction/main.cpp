//
//  main.cpp
//  L11PseudoFunction
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

// 伪函数

void hello(){
    printf("Hello\n");
}

class Hello{
    
public:
    void operator ()(){
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[])
{

    Hello h;
    
//    伪函数很强大
//    可以当成变量传递
//    作为方法回调
    h();
    return 0;
}

