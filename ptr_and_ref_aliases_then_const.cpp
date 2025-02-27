int main()
{
        //(int *) is the type given an alias
        typedef int * ip;

        int a = 7;
        int b = 9;

        //this is a NON-COMPOUND declaration/definition - ip is NOT
        //a compound type, hence const ip is A CONST OBJECT, not
        //a pointer to a const object (it is NOT equivalent to its
        //replacement: const int *, which is pointer to const)
        const ip c_ip = &a;

        //LEGAL, c_ip is not being changed
        *c_ip = 5;

        //ILLEGAL, assignment of read-only variable
        //c_ip = &b;


        //(int &) is given an alias
        typedef int & ir;

        int d = 11;

        //again, NON-COMPOUND declaration/definition, hence
        //the reference is constant (i.e., top-level only),
        //not the int being referenced; this is immaterial,
        //since the reference was impossible to rebind anyways
        const ir c_ir = d;

        //d does get changed
        c_ir = 15;

        return 0;
}