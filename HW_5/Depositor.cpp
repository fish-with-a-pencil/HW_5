//
//  Depositor.cpp
//
//  Insert clever and insightful comment here.
//

#include "Depositor.h"


Depositor::Depositor() {
     ssn = "111-11-1111";
}

string Depositor::getSSN() {
     return ssn;
}

Name* Depositor::getPName() {
     return &name;
}

void Depositor::setSSN(string ss) {
     ssn = ss;
}