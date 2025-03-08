#include <iostream>
#include <vector>
#include <string>

using std::vector, std::string, std::cout, std::endl;

int main() {

    int arr[] = {0, 1, 2};
    int *p = arr;
    int *p2 = &arr[2];

    //LEGAL, since p points into an array, it can be subscripted
    //accordingly, p[0] yielding *(p[0]), so 0
    cout << p[0] << endl;
    //LEGAL, yielding 2
    cout << p2[0] << endl;
    //LEGAL, yielding 2
    cout << p[2] << endl;
    //LEGAL, unlike with std iterators,
    //negative indexes are allowed, yielding 0
    cout << p2[-2] << endl;

    return 0;
}