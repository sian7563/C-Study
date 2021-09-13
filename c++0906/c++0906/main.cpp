//
//  main.cpp
//  c++0906
//
//  Created by kimsian on 2021/09/06.
//

#include <iostream>
using namespace std;

struct USERDATA
{
    int nAge;
    char szName[32];
};


int main()
{
    USERDATA user[5] = {
        { 20, "철수" },
        { 22, "영희" },
        { 23, "은기" },
        { 25, "교영" },
        { 21, "수형" },
    };
    for (auto n : user)
    {
        cout << "Age : " << n.nAge << ", User Name : "
            << n.szName << endl;
    }
    return 0;
}
