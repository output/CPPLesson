//
//  main.cpp
//  L14FriendClass
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

// 友元类
// 子类访问父类私有方法不能直接访问
class Man {
    
//     一般不用友元类，耦合度太高，除非迫不得已
    friend class Woman;
private:
    int age;
    
public:
    Man(){
        age = 10;
    }
};

class Woman : public Man{
    
    
public:
    
    Woman(){
        printf("%d\n", age);
    }
    
};




int main(int argc, const char * argv[])
{

    Woman *woman = new Woman();
    
    
    return 0;
}

