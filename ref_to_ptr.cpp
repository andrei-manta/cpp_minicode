#include <iostream>

int main()
{
        int a = 7;
        int *pa = &a;

        //read this from RIGHT TO LEFT: reference to pointer to int
        int *&rpa = pa;

        //the address of a
        std::cout << "rpa:" << rpa << std::endl;
        //the value of a
        std::cout << "*rpa:" << *rpa << std::endl;
        //also the address of a
        std::cout << "pa:" << pa << std::endl;
        //also the value of a
        std::cout << "*pa:" << *pa << std::endl;

        return 0;
}