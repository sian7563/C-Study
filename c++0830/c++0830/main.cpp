//
//  main.cpp
//  c++0830
//
//  Created by kimsian on 2021/08/30.
//

#include <iostream>

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

int Add(int a, int b, int c)
{
    std::cout << "Add(int, int, int): ";
    return a + b + c;
}

int Add(int a, int b)
{
    std::cout << "Add(int, int): ";
    return a + b;
}

double Add(double a, double b)
{
    std::cout << "Add(double, double): ";
    return a + b;
}

int main()
{
    std::cout << Add(3, 4) << std::endl;
    std::cout << Add(3, 4, 5) << std::endl;
    std::cout << Add(3.3, 4.4) << std::endl;

    return 0;
}
