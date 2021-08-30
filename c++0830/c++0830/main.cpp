//
//  main.cpp
//  c++0830
//
//  Created by kimsian on 2021/08/30.
//

//#include <iostream>

//int Add(int a, int b=10);
//
//int main()
//{
//    int res = Add(5, 7);
//    std::cout << "res : " << res << std::endl;
//
//    res = Add(5);
//    std::cout << "res : " << res << std::endl;
//
//    return 0;
//}
//int Add(int a, int b)
//{
//    return a + b;
//}

//int Add(int a, int b, int c)
//{
//    std::cout << "Add(int, int, int): ";
//    return a + b + c;
//}
//
//int Add(int a, int b)
//{
//    std::cout << "Add(int, int): ";
//    return a + b;
//}
//
//double Add(double a, double b)
//{
//    std::cout << "Add(double, double): ";
//    return a + b;
//}
//
//int main()
//{
//    std::cout << Add(3, 4) << std::endl;
//    std::cout << Add(3, 4, 5) << std::endl;
//    std::cout << Add(3.3, 4.4) << std::endl;
//
//    return 0;
//}

#include <iostream>
#include <typeinfo>
template <typename T>
T TestFunc(T a)
{
    std::cout << "매개변수 a : " << a
                  << ", type : " << typeid(a).name()  << std::endl;
    return a;
}
int main()
{
    std::cout << "int \t" << TestFunc(3) << std::endl;
    std::cout << "double \t" << TestFunc(3.3) << std::endl;
    std::cout << "char \t" << TestFunc('A') << std::endl;
    std::cout << "char* \t" << TestFunc("TestString") << std::endl;

    return 0;
}
