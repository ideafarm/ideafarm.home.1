
//#if defined( NEVERdEFINED )

union sizeIs_c_bad_4_U
{
    unsigned long long aa ;
    struct
    {
        unsigned long long     ii1 : 24 ;
        unsigned long long     ii2 : 24 ;
        unsigned long long     ii3 :  9 ;
    } ii ;
} ;

//#endif

int main( void )
{
    unsigned cb = 0 ;
    sizeIs_c_bad_4_U foo ;

    //cb = sizeof foo ;

    return 0 ;
}
