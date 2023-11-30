#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;


int main() {
//    Mystring();
    Mystring s("Salam Qaqa");
    Mystring t;
    t = Mystring("Hello World");

    t.operator=(s);
//    vector<Mystring> my_vec{};
//    my_vec.push_back(Mystring("Salam"));

//    Mystring lower;
//    cout << "Negative " << -s << std::endl;

return 0;

}

