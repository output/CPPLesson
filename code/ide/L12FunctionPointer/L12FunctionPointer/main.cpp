//
//  main.cpp
//  L12FunctionPointer
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>
// 函数指针

// 取别名
class Object;
typedef void(Object::*SayHi)();
typedef void(Object::*CallaterHandler)();


// 实例， 延时执行

void threadFunc(Object *target, CallaterHandler handler, int delay){
    sleep(delay);
    (target->*handler)();
    
}
void callater(Object *target, CallaterHandler handler, int delay){
    std::thread t(threadFunc, target, handler, delay);
    t.join();
}

#define CH(fp) (CallaterHandler)(&fp)


// =====
class Object{
    
public:
    void (Object::*sayHi)();
};

class Hello : public Object{
  
public:
    Hello(){
        
//        sayHi = (void(Object::*)())(&Hello::HelloSayHi);
//        sayHi = (SayHi)(&Hello::HelloSayHi);
//        (this->*sayHi)();
        
//        callater(this, (CallaterHandler)(&Hello::HelloSayHi), 3);
        callater(this, CH(Hello::HelloSayHi), 3);
    }
    
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
};



int main(int argc, const char * argv[])
{

    Hello *h = new Hello();
    
    delete h;
    return 0;
}

