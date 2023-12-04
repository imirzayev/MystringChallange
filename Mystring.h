//
// Created by pc_4653 on 29.11.2023.
//

#ifndef OPERATOROVERLOADING_MYSTRING_H
#define OPERATOROVERLOADING_MYSTRING_H

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &is, Mystring &obj);

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


    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    Mystring operator-();
    bool operator==(Mystring &rhs) const;
    bool operator!=(Mystring &rhs) const;
    bool operator<(Mystring &rhs) const;
    Mystring operator+(Mystring &rhs);
    Mystring &operator+=(Mystring &rhs);
    Mystring operator*(int num);
    Mystring &operator*=(int num);
    Mystring &operator++();
    Mystring operator++(int);
};

#endif //OPERATOROVERLOADING_MYSTRING_H
