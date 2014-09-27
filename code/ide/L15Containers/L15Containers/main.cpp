//
//  main.cpp
//  L15Containers
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include <iostream>

#include <list>
#include <Map>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    
//    =========[list]=========
    list<string> _list;
    _list.push_back("Hello");
    _list.push_back("Babybus");
    
    cout << endl << "=========[list]=========" << endl;
    for (list<string>::iterator i = _list.begin(); i != _list.end(); i++) {
        cout << *i << endl;
    }
    
    
//    =========[map]=========
    map<string,string> _map;
    _map.insert(pair<string, string>("company", "Babybus"));
    _map.insert(pair<string, string>("name", "Lance"));
    
    cout << endl << "=========[map]=========" << endl;
    cout << _map.at("name") << endl;
    cout << _map["company"] << endl; // 重载了[]运算符
    
//    =========[vector]=========
    vector<int> _vector;
    _vector.push_back(1);
    _vector.push_back(2);
    _vector.push_back(3);
    _vector.push_back(4);
    _vector.push_back(5);
    
    cout << endl << "=========[vector]=========" << endl;
    for (int i = 0; i < _vector.size(); i++) {
        cout << _vector[i] << endl;
    }
    
    return 0;
}

