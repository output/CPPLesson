//
//  Person.h
//  LO1OOP
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#ifndef __LO1OOP__Person__
#define __LO1OOP__Person__

#include <iostream>


class Person {
    
private:
    int age;
    
    int sex;
public:

    Person();
    
    Person(int age, int sex);
    
    int getAge();
    
    int getSex();
    
    void sayHello();
};


#endif /* defined(__LO1OOP__Person__) */
