int main()
{
        int a = 7;

        int &ref_a = a;
        const int &c_ref_a = a;

        //the legal indirect references reference the base object,
        //they DO NOT reference the direct references; i.e.,
        //&ref_ref is the address of the base object
        int &ref_ref_a = ref_a;
        //ILLEGAL, cannot copy const ref into nonconst ref, discards qualifiers
        //int &ref_c_ref_a = c_ref_a;
        const int &c_ref_ref_a = ref_a;
        const int &c_ref_c_ref_a = c_ref_a;

        //reference to literal - LEGAL, probably creates temporary
        const int &c_ref_to_lit = 2;
        //indirect reference to literal - LEGAL, probably binds to previously-
        //created temporary
        const int &c_ref_c_ref_to_lit = c_ref_to_lit;

        return 0;
}