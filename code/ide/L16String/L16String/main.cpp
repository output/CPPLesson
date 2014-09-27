//
//  main.cpp
//  L16String
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, const char * argv[])
{

    string str;
    str += "Hello ";
    str += "World";
    
    cout << str << endl;
    
    
    stringstream ss;
    ss << "Hello ";
    ss << 100;
    ss << "Hello Babybus ";
    ss << false;
    
    cout << ss.str() << endl;
    
    return 0;
}

