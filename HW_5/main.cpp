//
//  main.cpp
//  HW_5
//
//  Created by Jessie Day-Aguero on 11/2/16.
//  Copyright (c) 2016 Jessie Day-Aguero. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#include "Name.h"
#include "Depositor.h"
#include "Transaction.h"
#include "Account.h"
#include "Bank.h"

const int MAX = 30;

int main() {
     int ans;
     char YN;
     Depositor *depoArr[MAX];
     
     cout << "How many depositors would you like? ";
     cin >> ans;
     
     for (int i = 0; i < ans; i++) {
          depoArr[i] = new Depositor;
     }
     cout << depoArr[0]->getPName()->getFirst() << endl;
     depoArr[0]->getPName()->setFirst("Bob");
     cout << depoArr[0]->getPName()->getFirst() << endl;
     return 0;
}
