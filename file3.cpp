#include<iostream>
namespace sycs4
{
    int add()
    {
        int a, b, sub;
        std::cout << "enter two number";
        std::cin >> a >> b;
        std::cout << "sub of two number is " << (a - b);
        return 0;
    }
}