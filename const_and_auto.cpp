int main()
{
        const int i = 7;

        //a will be NONCONST int (top-level const dropped)
        auto a = i;

        //nc_ref_i will be NONCONST ref to CONST (low-level const kept)
        auto &nc_ref_i = i;

        //nc_ptr_i will be NONCONST ptr to CONST (low-level kept)
        auto nc_ptr_i = &i;

        //c_ptr_i will be CONST ptr to CONST
        const auto c_ptr_i = &i;

        //ILLEGAL, would allow changing a literal held in a temporary
        //auto &nc_ref_lit = 42;

        //LEGAL, simply another name for a literal held in a temporary
        const auto &c_ref_lit = 42;

        //const auto forces TOP-LEVEL const
        const auto &ref_to_c_int = i;

        return 0;
}