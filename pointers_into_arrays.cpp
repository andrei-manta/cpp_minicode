#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::vector, std::string, std::cout, std::endl;

int main() {

    int arr[] = {1, 2, 3};

    //LEGAL, takes the address of the first element
    int *b = arr;
    //LEGAL, takes the address of the off-the-end element
    int *e = &arr[3];

    //use pointers as iterators with pointer arithmetic
    for (; b != e; ++b)
        cout << *b << endl;

    //ALTERNATIVE
    int *b2 = std::begin(arr);
    int *e2 = std::end(arr);

    return 0;
}
