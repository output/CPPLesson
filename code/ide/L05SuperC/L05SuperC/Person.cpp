//
//  Person.cpp
//  LO1OOP
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include "Person.h"
Person::Person(){
    this->age = 10;
    this->sex = 1;
}

Person::Person(int age, int sex){
    this->age = age;
    this->sex = sex;
}

int Person::getAge(){
    return this->age;
}

int Person::getSex(){
    return this->sex;
}

void Person::sayHello(){
    printf("Hello CPP\n");
}