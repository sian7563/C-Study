//
//  main.cpp
//  c++1
//
//  Created by kimsian on 2021/08/23.
//

#include <iostream>

int main()
{
    
//    std::cout << "******" << std::endl;
//    std::cout << "******" << std::endl;
//    std::cout << "******" << std::endl;
//    std::cout << "******" << std::endl;
//    std::cout << "******" << std::endl;
//    std::cout << "******" << std::endl;

    bool b0 = 0 == 0;
    bool b1 = 0 < 1;
    bool b2 = 0 > 1;

//    std::cout << "bool 출력" << std::endl;
//    std::cout << "b0 : " << b0 << std::endl;
//    std::cout << "b1 : " << b1 << std::endl;
//    std::cout << "b2 : " << b2 << std::endl;
//    std::cout << std::endl;

    std::cout << "bool 출력을 true, false로 하도록 변경" << std::endl;
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "b0 : " << b0 << std::endl;
    std::cout << "b1 : " << b1 << std::endl;
    std::cout << "b2 : " << b2 << std::endl;
    std::cout << std::endl;
    
    return 0;
}

