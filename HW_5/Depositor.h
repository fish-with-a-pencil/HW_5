//
//  Depositor.h
//  HW_5
//
//  Created by Jessie Day-Aguero on 11/2/16.
//  Copyright (c) 2016 Jessie Day-Aguero. All rights reserved.
//

#ifndef __HW_5__Depositor__
#define __HW_5__Depositor__

#include <iostream>
#include "Name.h"
#include <string>
using namespace std;

class Depositor {
private:
     Name name;
     string ssn;
public:
     Depositor();
     string getSSN();
     Name *getPName();
     void setSSN(string);
};

#endif /* defined(__HW_5__Depositor__) */
