//
//  main.cpp
//  c++2
//
//  Created by kimsian on 2021/08/25.
//

//#include <iostream>
//#include <typeinfo>
//
//int main()
//{
//
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
    
//    auto a = true;
//    auto b = 'A';
//    auto c = L'B';
//    auto d = "문자열";
//    auto e = 815;
//    auto f = 3.14;
//
//    std::cout << "값\t크기\t자료형" << std::endl;
//    std::cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
//    std::cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
//    std::cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
//    std::cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
//    std::cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
//    std::cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
    
    
//    int nums[] = { 1, 2, 3 };
//
//    std::cout << typeid(1).name() << std::endl;
//    std::cout << typeid(10 + 3.2).name() << std::endl;
//    std::cout << typeid(nums).name() << std::endl;
//    std::cout << typeid(&nums).name() << std::endl;
//    std::cout << typeid(&nums[0]).name() << std::endl;

   
//      int* pData = new int;
//
//
//      int* pNewData = new int(10);
//
//      *pData = 5;
//      std::cout << *pData << std::endl;
//      std::cout << *pNewData << std::endl;
//
//      delete pData;
//      delete pNewData;
        
//      int* arr = new int[5];
//
//      for (int i = 0; i < 5; i++)
//           arr[i] = (i + 1) * 10;
//
//      for (int i = 0; i < 5; i++)
//           std::cout << arr[i] << std::endl;
//
//      delete[] arr;
    
    
//        int nData = 10;
//
//
//        int& ref = nData;
//
//
//        ref = 20;
//
//        std::cout << nData << std::endl;
//
//
//        int* pnData = &nData;
//        *pnData = 30;
//        std::cout << nData << std::endl;
    

//    return 0;
//}

#include <iostream>

//void TestFunc(int& rParam)
//{
//
//    rParam = 100;
//}
//
//int main()
//{
//    void Swap(int& a, int& b)
//    {
//        int nTmp = a;
//        a = b;
//        b = nTmp;
//    }

    int main()
    {
//        int nX = 10, nY = 20;
//
//        std::cout << "함수 호출 전"<< std::endl;
//        std::cout << "nX : " << nX << std::endl;
//        std::cout << "nY : " << nY << std::endl;
//
//        Swap(nX, nY);
//
//
//        std::cout << "\n함수 호출 후" << std::endl;
//        std::cout << "nX : " << nX << std::endl;
//        std::cout << "nY : " << nY << std::endl;

        int nList[5] = { 10, 20, 30, 40, 50 };

           
        for (int i = 0; i < 5; i++)
            std::cout << nList[i] << " ";

        std::cout << std::endl;

            
        for (auto n : nList)
            std::cout << n << " ";

        std::cout << std::endl;

           
        for (auto &n : nList)
            std::cout << n << " ";

        std::cout << std::endl;
        
    return 0;

}
