
voidT hushReadPrivateKeyFromFileF_ob4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hKeyPrivateP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hKeyPrivateP << slP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFileP ) ;
    if( !POOP ) { slP >> psttFileP ; ___( psttFileP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.hushReadPrivateKeyFromFileF( tin0P , hKeyPrivateP , psttFileP ) ;
    etherP.delF( tin0P , psttFileP ) ;
}

voidT hushReadPublicKeyFromFileF_ob4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hKeyPublicP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hKeyPublicP << slP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFileP ) ;
    if( !POOP ) { slP >> psttFileP ; ___( psttFileP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.hushReadPublicKeyFromFileF( tin0P , hKeyPublicP , psttFileP ) ;
    etherP.delF( tin0P , psttFileP ) ;
}

voidT hushEncryptF_o1P31P31P31P3b_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbSymCypherTextP ) ;
    if( !POOP ) { slP >> pbSymCypherTextP ; ___( pbSymCypherTextP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbSymCypherTextP ) ;
    if( !POOP ) { slP >> cbSymCypherTextP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbHushedSymKeyP ) ;
    if( !POOP ) { slP >> pbHushedSymKeyP ; ___( pbHushedSymKeyP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbHushedSymKeyP ) ;
    if( !POOP ) { slP >> cbHushedSymKeyP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbSeedP ) ;
    if( !POOP ) { slP >> pbSeedP ; ___( pbSeedP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbSeedP ) ;
    if( !POOP ) { slP >> cbSeedP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbPlainTextP ) ;
    if( !POOP ) { slP >> pbPlainTextP ; ___( pbPlainTextP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbPlainTextP ) ;
    if( !POOP ) { slP >> cbPlainTextP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushEncryptF( tin0P , pbSymCypherTextP , cbSymCypherTextP , pbHushedSymKeyP , cbHushedSymKeyP , pbSeedP , cbSeedP , pbPlainTextP , cbPlainTextP , handleP ) ;
    etherP.delF( tin0P , pbPlainTextP ) ;
    etherP.delF( tin0P , pbSeedP ) ;
    etherP.delF( tin0P , pbHushedSymKeyP ) ;

    if( !POOP ) slP << pbSymCypherTextP ;
    etherP.delF( tin0P , pbSymCypherTextP ) ;
}

voidT hushDecryptF_o1P31P31P31P3b_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbPlainTextP ) ;
    if( !POOP ) { slP >> pbPlainTextP ; ___( pbPlainTextP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbPlainTextP ) ;
    if( !POOP ) { slP >> cbPlainTextP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbSymCypherTextP ) ;
    if( !POOP ) { slP >> pbSymCypherTextP ; ___( pbSymCypherTextP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbSymCypherTextP ) ;
    if( !POOP ) { slP >> cbSymCypherTextP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbHushedSymKeyP ) ;
    if( !POOP ) { slP >> pbHushedSymKeyP ; ___( pbHushedSymKeyP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbHushedSymKeyP ) ;
    if( !POOP ) { slP >> cbHushedSymKeyP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbSeedP ) ;
    if( !POOP ) { slP >> pbSeedP ; ___( pbSeedP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbSeedP ) ;
    if( !POOP ) { slP >> cbSeedP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushDecryptF( tin0P , pbPlainTextP , cbPlainTextP , pbSymCypherTextP , cbSymCypherTextP , pbHushedSymKeyP , cbHushedSymKeyP , pbSeedP , cbSeedP , handleP ) ;
    etherP.delF( tin0P , pbSeedP ) ;
    etherP.delF( tin0P , pbHushedSymKeyP ) ;
    etherP.delF( tin0P , pbSymCypherTextP ) ;

    if( !POOP ) slP << pbPlainTextP ;
    etherP.delF( tin0P , pbPlainTextP ) ;
}

voidT hushMakeKeyPairF_ob3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hKeyPairP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hKeyPairP << slP ; idArgNext ++ ; }

    ZE( countT , cBitsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cBitsP = HUSHbITSdEFAULT ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cBitsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.hushMakeKeyPairF( tin0P , hKeyPairP , cBitsP ) ;
}

voidT hushWothNonceF_o6333b_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0x0 , etherC )
   SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( boolT , bQuitP ) ;
    if( !POOP ) { slP >> bQuitP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , moduloP ) ;
    if( !POOP ) { slP >> moduloP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , randomP ) ;
    if( !POOP ) { slP >> randomP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , maxP ) ;
    if( !POOP ) { slP >> maxP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.hushWothNonceF( tin0P , bQuitP , moduloP , randomP , maxP , handleP ) ;

    slP << noName ;
}
