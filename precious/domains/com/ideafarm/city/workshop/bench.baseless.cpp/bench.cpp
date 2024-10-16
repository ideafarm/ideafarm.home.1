

struct fooS
{
    unsigned c1 ;
}
;

struct gooS : public fooS
{
    unsigned pcArray[ 8 ] ;
}
;

int main( void )
{
    gooS  goo ;
    fooS& fooRef = goo ;

    unsigned cElts = sizeof ((gooS&)fooRef).pcArray / sizeof ((gooS&)fooRef).pcArray[ 0 ] ;

    if( cElts ) ;

    for( unsigned offe = 0 ; offe < sizeof ((gooS&)fooRef).pcArray / sizeof ((gooS&)fooRef).pcArray[ 0 ] ; offe ++ )
    {
        if( offe ) ;
    }

    return 0 ;
}
