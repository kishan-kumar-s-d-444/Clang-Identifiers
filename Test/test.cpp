// #include <iostream>
// namespace X {
// class Y {
// public:
//   void hello() {
//     std::cout << __fq_func__ << std::endl;
//     std::cout << __mangled_func__ << std::endl;
//   }
// };
// }
// int main() {
//   X::Y y;
//   y.hello();
// }

// #include <iostream>

// namespace MyNamespace {
// class MyClass {
// public:
//     void hello() {
//         std::cout << "FQ Name: " <<__fq_func__<< std::endl;
//         std::cout << "Mangled Name: " <<__mangled_func__<< std::endl;
//     }
// };
// }

// int main() {
//     MyNamespace::MyClass obj;
//     obj.hello();
//     return 0;
// }

#include <iostream>

namespace Foo {
class Bar {
public:
    void myFunction() {
        std::cout << "Current function: " << __fq_func__ << std::endl;
        std::cout << "Mangled function: " << __mangled_func__ << std::endl;
    }
};
}

int main() {
    Foo::Bar bar;
    bar.myFunction();
    return 0;
}

// #include<stdio.h>
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"KISHAN";
// }