//
//  main.cpp
//  L17FileSystem
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>
#include <fstream>

#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    
//    写入操作
    ofstream of("data.txt");
    of << "Hello Babubus Lance";
    of.close();
    
//    读取操作
    ifstream inf("data.txt");
    
//    string str;
//    inf >> str;
//    这样只能读取第一个单词
//    cout << str << endl;
    
    stringbuf sb;
    inf >>  &sb;
    cout << sb.str() << endl;
    
    
    
    return 0;
}

