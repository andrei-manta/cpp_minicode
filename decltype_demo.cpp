int main()
{
        int a = 7;
        int &ref_nc_a = a;

        const int b = 9;
        const int &ref_c_b = b;

        //simple int
        decltype(a) a1 = 11;
        //REFERENCE to int, such is the evaluation of
        //the variable expression E = (a)
        decltype((a)) a2 = a;

        //CONST int, decltype does NOT drop top-level const
        decltype(b) b1 = 13;

        //ref to CONST INT, const not dropped
        decltype((b)) b2 = b;

        //ref to nonconst int
        decltype(ref_nc_a) a3 = a;

        //ref to const int
        decltype(ref_c_b) b3 = b;

        //the expression is evaluated to int + int -> int, thus a4 is
        //a plain int
        decltype(ref_nc_a + 0) a4 = 15;

        int *ptr_a = &a;
        //surprisingly, the evaluation of E = dereferenced pointer yields
        //a REFERENCE to int, not a plain int, therefore this is ILLEGAL,
        //reference without initialiser
        //decltype(*ptr_a) a5;

        return 0;
}