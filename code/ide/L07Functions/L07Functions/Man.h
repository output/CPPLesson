//
//  Man.h
//  L03Classes
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <iostream>

#include "Person.h"


// 调用父类构造函数

// 补充：(L08)纯虚类->类中的所有的方法都是virtual ， 相当于java中的接口
class Man : public Person {

public:
    Man(int age);
    
    virtual void sayHello();
    
    virtual void eat();
};

#endif /* defined(__L03Classes__Man__) */
