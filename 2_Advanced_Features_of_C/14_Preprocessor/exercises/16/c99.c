#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void)
{
    int foo = 0;
    
    IDENT(foo);

    return 0;
}
