#include <iostream>
#include <vector>
#include <string>

using std::vector, std::string, std::cout, std::endl;

//initialised with 3 zeroes
int ia[3];
//initialised with 3 ""
string sa[3];

int main() {

    //LEGAL, but initialised with 3 UNDEFINED VALUES
    int ib[3];
    //LEGAL, but initialised with 3 UNDEFINED VALUES
    string sb[3];

    cout << "ia---" << endl;
    for (auto each : ia) {
        cout << each << endl;
    }
    cout << "sa---" << endl;
    for (auto each : sa) {
        cout << each << endl;
    }

    cout << "ib---" << endl;
    for (auto each : ib) {
        cout << each << endl;
    }

    cout << "sb---" << endl;
    for (auto each : sb) {
        cout << each << endl;
    }

    return 0;
}
