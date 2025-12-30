
struct
{
    unsigned long long     ii1 : 24 ;
    unsigned long long     ii2 : 24 ;
    unsigned long long     ii3 :  9 ;
}
foo ;

unsigned c1 = sizeof foo ;

int main( void )
{
    return 0 ;
}
