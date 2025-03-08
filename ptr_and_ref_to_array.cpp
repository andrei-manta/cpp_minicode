#include <iostream>
#include <vector>
#include <string>

using std::vector, std::string, std::cout, std::endl;

int arr[10];

//LEGAL, array of size 10 of pointers to int
int *ptrs[10];
//ILLEGAL, refs are not objects, hence can't be held
//in arrays
//int &refs[10];
//LEGAL, POINTER TO an array of size 10 holding ints
int (*parray)[10] = &arr;
//LEGAL, REF TO and array of size 10 holding ints
int (&rarray)[10] = arr;

int main() {
    return 0;
}