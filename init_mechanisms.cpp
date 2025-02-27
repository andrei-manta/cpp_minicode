//four LEGAL initialisations
int a (0);
int b = 0;
int c {0};
int d = {0};

//two LEGAL inits, but information is lost
int e (3.14);
int f = 3.14;
//two ILLEGAL inits, nonpermissive for
//information loss
//int g {3.14};
//int h = {3.14};

struct I_struct
{
        //ILLEGAL, paranthetised initialisation
        //disallowed inside a class definition scope
        int j = (3.14);
        //allowed, information loss
        int k = 3.14;
        //ILLEGAL, brackets disallowed where
        //information would be lost
        //int l {3.14};
        //int m = {3.14};
};

int main()
{
        return 0;
}