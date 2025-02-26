int main()
{
        int i = 7;

        //const ref to nonconst object - FINE, can't use the ref to change the object
        const int &r1 = i;
        //const ref to int literal - FINE, probably creates temporary storage
        const int &r2 = 42;
        //const ref to nonconst object(i) expression - FINE, probably creates temporary storage
        const int &r3 = r1 * 2;

        //nonconst ref to temporary variable through a const ref - ILLEGAL
        //int &r4 = r2 * 2;

        //nonconst ref to temporary variable (r1 * 2 still temporary here, even without the literal initialiser) through a const ref - ILLEGAL
        //int &r5 = r3 * 3;

        double a = 3.14;
        //FINE, but ref_a represents a converted to int, hence ref_a = 3, probably a temporary
        const int &ref_a = a;

        double b = 6.28;
        //ILLEGAL, b would get converted to 6, 6 be held in a temporary, nonconst reference to temporary is illegal
        int &ref_b = b;

        return 0;
}
