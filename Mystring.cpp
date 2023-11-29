//
// Created by pc_4653 on 29.11.2023.
//
#include <cstring>
#include <ctype.h>
#include <iostream>
#include "Mystring.h"

using namespace std;

Mystring::Mystring()
:str{nullptr}{
    cout << "Crated a new Mystring object with empty constructor and str is end character!" << endl;
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
:str{nullptr}{
    cout << "Created a new Mystring object using const str " << s << endl;
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &mystr)
:str{nullptr}{
    cout << "Copied the object " << mystr << " with copy constructor" << endl;
}

Mystring::~Mystring() {
    cout << "Removed the object " << str << endl;
    delete [] str;
}

std::ostream &operator<<(std::ostream &os, const Mystring &mystr) {
    os << mystr.str;
    return os;
}

Mystring &Mystring::operator-() {
    char *buff = new char[strlen(str) + 1];
    for(int i = 0; i < strlen(str); i++) {
        *(buff+i) = tolower(*(str+i));
    }

    str = buff;
    buff = nullptr;
}
