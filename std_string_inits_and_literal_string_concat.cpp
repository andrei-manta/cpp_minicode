#include <string>

using std::string;

int main()
{
        string s0 = "!";

        //ILLEGAL, + is undefined for char[] + char[]
        //string s1 = "Hello" + "world" + s0;

        //LEGAL, + is defined and returns a ref to its
        //left operand
        string s2 = s0 + "Hello" + "world";

        //LEGAL, literal strings separated by whitespace
        //get concatenated, hence s3 will be
        //"Helloworld!"
        string s3 = "Hello" "world" "!";

        //ILLEGAL, literal strings and chars separated by
        //whitespace DO NOT get concatenated
        //string s4 = "Hello" ' ' "world";

        return 0;
}