
struct fooS
{
    unsigned long long     ii1 : 24 ;
    unsigned long long     ii2 : 24 ;
    unsigned long long     ii3 :  9 ;
}
;


union gooU
{
    unsigned long long aa  ;
    fooS               foo ;
} ;

fooS foo ;
gooU goo ;

unsigned c1 = sizeof foo    ;

unsigned c2 = sizeof goo     ;
unsigned c3 = sizeof goo.aa  ;
unsigned c4 = sizeof goo.foo ;

int main( void )
{
    return 0 ;
}
