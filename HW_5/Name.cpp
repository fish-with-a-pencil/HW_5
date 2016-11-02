//
//  Name.cpp
//
//  Insert clever and insightful comment here.
//

#include "Name.h"
#include <string>
using namespace std;

Name::Name() {
     first = "Rico";
     last = "Suave";
}

Name::Name(string f, string l) {
     first = f;
     last = l;
}

string Name::getFirst() {
     return first;
}

string Name::getLast() {
     return last;
}

void Name::setFirst(string f) {
     first = f;
}

void Name::setLast(string l) {
     last = l;
}