//
//  Name.h
//  HW_5
//
//  Created by Jessie Day-Aguero on 11/2/16.
//  Copyright (c) 2016 Jessie Day-Aguero. All rights reserved.
//

#ifndef __HW_5__Name__
#define __HW_5__Name__

#include <iostream>
#include <string>
using namespace std;

class Name {
private:
     string first, last;
public:
     Name();
     Name(string, string);
     string getFirst();
     string getLast();
     void setFirst(string);
     void setLast(string);
};

#endif /* defined(__HW_5__Name__) */