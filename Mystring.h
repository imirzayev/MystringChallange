//
// Created by pc_4653 on 29.11.2023.
//

#ifndef OPERATOROVERLOADING_MYSTRING_H
#define OPERATOROVERLOADING_MYSTRING_H

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);

private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);

//    Copy
    Mystring(const Mystring &mystr);
//    Move
    Mystring(Mystring &&mystr);

    ~Mystring();

    Mystring operator-();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
};

#endif //OPERATOROVERLOADING_MYSTRING_H
