int main()
{
        int a = 1;
        const int b = 2;

        //convert nonconst int to const int and assign - LEGAL
        const int &c_ref_a = a;
        //types match
        const int &c_ref_b = b;
        //types match
        int &nc_ref_a = a;
        //convert const int to nonconst int - ILLEGAL
        //int &nc_ref_b = b;

        //exact same rules
        const int *c_ptr_a = &a;
        const int *c_ptr_b = &b;
        int *nc_ptr_a = &a;
        //int *nc_ptr_b = &b;

        //general idea - can't copy const references into nonconst ones,
        //the nonconsts defeat the purpose of the consts

        return 0;
}