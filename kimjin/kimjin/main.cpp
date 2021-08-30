//
//  main.cpp
//  kimjin
//
//  Created by kimsian on 2021/08/30.
//

#include <iostream>

int calcEarnings(int rate, int hours=40);

int main() {
    int rate = 0 , hours;
    while (rate != 0) {
        
    
    std::cout << "직원의 수입을 계산합니다." << std::endl;
    std::cout << "직원의 시급과 시간을 차례로 입력하세요 : ";
    std::cin >> rate >> hours;
    
    
    std::cout << "직원의 임금 :" << calcEarnings(rate, hours);
    }

  

}

int calcEarnings(int rate, int hours)
{
    return rate * hours;
}
