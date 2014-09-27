//
//  main.cpp
//  L09Overload
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

// 函数重载

class Hello{
    
public:
    void sayHello(){
        printf("Hello Babybus\n");
    }

//    C写法
//    void sayHello(char *name){
//        printf("Hello %s\n", name);
//    }
    
    void sayHello(std::string name){
        std::string str = "Hello ";
        str+= name;
        
        std::cout << str << std::endl;
    }
    
};

int main(int argc, const char * argv[])
{

    Hello *h = new Hello();
    
//    C写法
//    h->sayHello("Lance");
//    std::string name = "Lance";
//    转成C类型的字符串,这样就不会警告了。
//    h->sayHello((char *)name.c_str());
    
//    C++写法
    h->sayHello("Lance");
    
    
    
    
    return 0;
}

