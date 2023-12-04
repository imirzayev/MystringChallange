//
// Created by pc_4653 on 29.11.2023.
//
#include <cstring>
#include <cctype>
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
    char *tmp = new char[strlen(mystr.str) + 1];
    strcpy(tmp, mystr.str);
    str = tmp;
    cout << "Copied the object " << mystr << " with copy constructor" << endl;
}

Mystring::Mystring(Mystring &&mystr)
:str{mystr.str}{
    cout << "Moved the object " << mystr.str << '\n';
    mystr.str = nullptr;
}

Mystring::~Mystring() {
    if (str != nullptr) {
        cout << "Removed the object " << str << endl;
        delete[] str;
    }
    else
        cout << "Nullptr object removal" << endl;

}

std::ostream &operator<<(std::ostream &os, const Mystring &mystr) {
    os << mystr.str;
    return os;
}

Mystring Mystring::operator-() {
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);

    for(int i = 0; i < strlen(buff); i++) {
        *(buff+i) = tolower(*(buff+i));
    }

    Mystring temp{buff};

    delete [] buff;
    return temp;
}

bool Mystring::operator==(Mystring &rhs) const{
    if(strcmp(this->str, rhs.str) == 0)
        return true;
    else
        return false;
}

bool Mystring::operator<(Mystring &rhs) const {

}

bool Mystring::operator!=(Mystring &rhs) const{
    if(strcmp(this->str, rhs.str) == 0)
        return false;
    else
        return true;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    if(this == &rhs)
        return *this;

    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);

    cout << "Copy Assignment for " << rhs << '\n';
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if(this == &rhs)
        return *this;

    delete[] this->str;

    cout << "Move assignment on " << rhs << '\n';

    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

Mystring Mystring::operator+(Mystring &rhs) {
    char* buff = new char[strlen(str) + strlen(rhs.str) + 1];

    strcpy(buff, this->str);
    strcat(buff, rhs.str);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring &Mystring::operator+=(Mystring &rhs) {
    char* buff = new char[strlen(this->str) + strlen(rhs.str) + 1];

    strcpy(buff, this->str);
    delete [] this->str;

    this->str = buff;

    strcat(this->str, rhs.str);
    return *this;
}


Mystring Mystring::operator*(int num) {
    char* buff = new char[strlen(this->str) * num + 1];
    strcpy(buff, this->str);

    while(num-- > 1)
        strcat(buff, this->str);

    Mystring temp{buff};
    delete [] buff;

    return temp;
}

Mystring &Mystring::operator*=(int num) {
    char *buff = new char[strlen(this->str) * num + 1];
    strcpy(buff, this->str);

    while(num-->1)
        strcat(buff, this->str);

    delete[] this->str;
    this->str = buff;

    return *this;
}

Mystring &Mystring::operator++() {
    for(size_t i = 0; i < strlen(this->str); i++)
        *(this->str + i) = toupper(*(this->str + i));

    return *this;
}


Mystring Mystring::operator++(int) {
    Mystring temp{*this};
    operator++();
    return temp;
}

std::istream &operator>>(istream &is, Mystring &obj) {
    char *buff = new char [1000];
    is >> buff;
    obj = Mystring(buff);
    delete[] buff;
    return is;
}
