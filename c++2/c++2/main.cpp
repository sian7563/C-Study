//
//  main.cpp
//  c++2
//
//  Created by kimsian on 2021/08/25.
//

#include <iostream>
#include <typeinfo>

int main()
{
    
//    int num = 10;
//    int num2(20);
//    int num3(num2);
//
//    std::cout << "num : " << num << std::endl;
//    std::cout << "num2 : " << num2 << std::endl;
//    std::cout << "num3 : " << num3 << std::endl;

//    auto nData = 10;
//    std::cout << "nData : " << nData << ", "
//              << typeid(nData).name() << std::endl;
//
//    auto strName = "Tom";
//    std::cout << "strName : " << strName << ", "
//              << typeid(strName).name() << std::endl;
//
//    auto ch = 'A';
//    std::cout << "ch : " << ch << ", "
//              << typeid(ch).name() << std::endl;
    
    auto a = true;
    auto b = 'A';
    auto c = L'B';
    auto d = "문자열";
    auto e = 815;
    auto f = 3.14;

    std::cout << "값\t크기\t자료형" << std::endl;
    std::cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
    std::cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
    std::cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
    std::cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
    std::cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
    std::cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
    
    
    

    return 0;
}
