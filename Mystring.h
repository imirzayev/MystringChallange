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

    Mystring(const Mystring &mystr);
    Mystring(Mystring &&mystr);

    ~Mystring();

    Mystring &operator-();
};

#endif //OPERATOROVERLOADING_MYSTRING_H
