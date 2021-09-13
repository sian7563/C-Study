//
//  main.cpp
//  c++0913
//
//  Created by kimsian on 2021/09/13.
//


//#include <iostream>
//using namespace std;
//class CTest
//{
//private:
//
//    int num;
//
//public:
//    CTest(int n) : num(n)
//    {
//        cout << "CTest::CTest() " << num << endl;
//    }
//    ~CTest()
//    {
//        cout << "CTest::~CTest() " << num << endl;
//    }
//};
//
//CTest one(1);
//
//int main()
//{
//    cout << "main 함수 시작" << endl;
//    CTest two(2);
//    {
//        CTest three(3);
//    }
//    cout << "main 함수 종료" << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//class CTest
//{
//    int m_nData;
//public:
//    CTest() : m_nData(0)
//    {
//
//        cout << "CTest::CTest() " << m_nData << endl;
//    }
//    CTest(int nParam) :m_nData(nParam)
//    {
//
//        cout << "CTest::CTest(int nParam) " << m_nData << endl;
//    }
//    ~CTest()
//    {
//
//        cout << "CTest::~CTest() " << m_nData << endl;
//    }
//};
//
//int main()
//{
//    cout << "main 함수 시작" << endl;
//    CTest a;
//    cout << "Before b" << endl;
//    CTest b(10);
//    cout << "main 함수 종료" << endl;
//    return 0;
//}

#include <iostream>
using namespace std;
class CTest
{
    int m_nData;
public:
    CTest() : m_nData(0)
    {
    
        cout << "CTest::CTest() " << m_nData << endl;
    }
    CTest(int nParam) :m_nData(nParam)
    {
    
        cout << "CTest::CTest(int nParam) " << m_nData << endl;
    }
    ~CTest()
    {
         
        cout << "CTest::~CTest() " << m_nData << endl;
    }
};
int main()
{
    cout << "Begin " << endl;
    
    CTest* pData = new CTest[3];
   
    CTest* pData2 = new CTest[3]{ 10, 20, 30 };

   
    delete[] pData;

    pData = new CTest(40);

    delete pData;
    
    cout << "End " << endl;
  
    delete[] pData2;
    
    return 0;
}
