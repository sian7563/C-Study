//
//  main.cpp
//  c++0901
//
//  Created by kimsian on 2021/09/01.
//

#include <iostream>
int calcEarnings(int rate, int hours = 40);
//int main()
//{
//    int rate, hours, pay;
//    std::cout << "직원의 수입을 계산합니다.\n";
//    while (1)
//    {
//        std::cout << "직원의 시급과 시간을 차례로 입력하세요 : ";
//        std::cin >> rate;
//        if (rate == 0)
//            break;
//        std::cin >> hours;
//        if (hours)
//            pay = calcEarnings(rate, hours);
//        else
//            pay = calcEarnings(rate);
//        std::cout << " 직원의 임금 : " << pay << std::endl;
//    }
//    return 0;
//}
//int calcEarnings(int rate, int hours)
//{
//    return rate * hours;
//}

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
