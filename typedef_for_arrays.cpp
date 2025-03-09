
//LEGAL, nicer
using int_array = int[4];
//LEGAL, careful - [4] belongs to int not to int_array_
typedef int int_array_[4];

int main() {
    return 0;
}