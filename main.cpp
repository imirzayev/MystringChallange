#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;


int main() {
//    Mystring();
    Mystring s("Salam Dunya");
    Mystring t;
    Mystring o("HELLO WORLD");
    Mystring c;

//    Test case for the Move Assignment overloading.
    cout << "\n\n\n";
    cout << "Testing move assignment overloading: t is"<< t << '\n';
    t = Mystring("Hello World");
    cout << "t after the assignment is "<< t;
    cout << "\n\n\n";

//    Test case for the copy assignment overloading
    cout << "\n\n\n";
    cout << "Copying the value of s " << s << " into t " << t << '\n';
    t = (s);
    cout << "After assignment s is " << s << " and t is" << t << "\n\n\n";

//    Test case for the negation operator overloading.
    cout << "\n\n\n";
    cout << "Testing the negation operator on mystring object. t is " << t << " and o is " << o << '\n';
    t = -o;
    cout << "After negation t is " << t << " and o is " << o;
    cout << "\n\n\n";

//    Test case for equal operator.
    cout << "\n\n\n";
    t = o;
    cout << "Testing the equality operator on t and o. t is " << t << " and o is " << o << " The operator returns " << std::boolalpha << bool (t == o);
    cout << "\n\n\n";

//   Test case for inequal operator.
    cout << "\n\n\n";
    t = o;
    cout << "Testing the inequality operator on t and o. t is " << t << " and o is " << o << " The operator returns " << std::boolalpha << bool (t != o);
    cout << "\n\n\n";

//    Test for concat operator
    c = s + t;
    cout << c;
    cout << "\n\n\n";


//    Test for += operator
    cout << "Testing the += operator on t and s. t is " << t <<" and s is " << s << '\n';
    t+=(s);
    cout << "t is " << t <<" and s is " << s << '\n';
    cout << "\n\n\n";

//    Testing * operator
    cout << "Testing * operator on t. t is " << t << '\n';
    t = t*3;
    cout << "After t become " << t;
    cout << "\n\n\n";


//    Testing *= operator
    cout << "Testing *= operator on s. s is " << s << '\n';
    s *= 3;
    cout << "After s become " << s;
    cout << "\n\n\n";

//    Testing pre++ operator
    cout << "Pre ++ operator. s is" << s << '\n';
    cout << "After s become " << ++s;
    cout << "\n\n\n";

// Testing post ++ operator
    s = -s;
    cout << "Post ++ operator. s is" << s << '\n';
    cout << "After s become " << s++ << '\n';
    cout << "After s become " << s;
    cout << "\n\n\n";


//    vector<Mystring> my_vec{};
//    my_vec.push_back(Mystring("Salam"));

//    Mystring lower;
//    cout << "Negative " << -s << std::endl;

return 0;

}

