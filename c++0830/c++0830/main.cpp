//
//  main.cpp
//  c++0830
//
//  Created by kimsian on 2021/08/30.
//

#include <iostream>

int Add(int a, int b=10);

int main()
{
    int res = Add(5, 7);
    std::cout << "res : " << res << std::endl;

    res = Add(5);
    std::cout << "res : " << res << std::endl;

    return 0;
}
int Add(int a, int b)
{
    return a + b;
}

