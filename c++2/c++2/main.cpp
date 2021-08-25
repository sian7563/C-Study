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

    auto nData = 10;
    std::cout << "nData : " << nData << ", "
              << typeid(nData).name() << std::endl;

    auto strName = "Tom";
    std::cout << "strName : " << strName << ", "
              << typeid(strName).name() << std::endl;

    auto ch = 'A';
    std::cout << "ch : " << ch << ", "
              << typeid(ch).name() << std::endl;
    
    

    return 0;
}
