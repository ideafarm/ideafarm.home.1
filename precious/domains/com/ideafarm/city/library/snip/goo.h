
#if defined( __OS2__ )
    extern "C"         voidT  _export OSF mainF(   mainS* const pMainParametersP ) ;
#elif defined( __NT__ )
    extern "C"         countT _export OSF mainF(   mainS* const pMainParametersP ) ;
#endif

