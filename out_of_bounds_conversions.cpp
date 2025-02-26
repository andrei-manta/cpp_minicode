#include <iostream>
#include <cmath>

int main()
{
        //a, being unsigned, will be 1000000 MOD pow(2, 8 * sizeof(short int))
        unsigned short int a = 1000000;
        //b will be UNDEFINED, being signed (NO GUARANTEE OF MODULUS APPLICATION)
        signed short int b = 1000000;

        std::cout << "the number of storable values in a short int :" << pow(2, 8 * sizeof(short int)) << std::endl;
        std::cout << "unsigned short int a = 1000000 yields :" << a << std::endl;
        std::cout << "signed short int b = 1000000 yields :" << b << std::endl;

        return 0;
}