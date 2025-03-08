#include <vector>
#include <string>

using std::vector, std::string;

vector<string> v1{"hi"}; //LEGAL, list-initialisation
//vector<string> v2("hi"); //ILLEGAL, can't convert string literal to default initialisation
vector<string> v3{10}; //LEGAL, convert 10 to default initialisation,
//v3 is a vector of size 10 with 10 empty strings
vector<string> v4{10, "hi"}; //LEGAL, convert {}-style to ()-style
//default initialisation, build vector of 10 "hi" strings

int main() {
    return 0;
}