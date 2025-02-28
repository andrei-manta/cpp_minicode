//constexpr forces TOP-LEVEL const

//a and b are global-scope, hence their address is fixed
int a = 5;
const int b = 7;

//1. a is a fixed-address variable (necessary for constexpr ptr and ref),
//2. p1's low-level is compatible with a's top-level(nonconst and nonconst), hence
//constexpr is - LEGAL; p1's top-level is CONST, from the constexpr
constexpr int *p1 = &a;
//const int initialises nonconst int * - ILLEGAL
//constexpr int *p2 = &b;
//nonconst int converted to const int *, hence constexpr is - LEGAL
constexpr const int *p3 = &a;
//const qualifier match - LEGAL
constexpr const int *p4 = &b;

//exact same as above
constexpr int &r1 = a;
//constexpr int &r2 = b;
constexpr const int &r3 = a;
constexpr const int &r4 = b;

//constexpr pointers can also be initialised with 0 and nullptr
constexpr int *p5 = 0;
constexpr int *p6 = nullptr;

int main()
{
        return 0;
}
