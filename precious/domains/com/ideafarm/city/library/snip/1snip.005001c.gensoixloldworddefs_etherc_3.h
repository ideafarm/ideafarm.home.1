
voidT homeOsDriverNameF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.homeOsDriverNameF( tinBaseP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osDriverRemoveOldF_3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.osDriverRemoveOldF( tinBaseP , idAdamP ) ;

    slP << noName ;
}

voidT osDriverParseNameF_3334P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idHomeP ) ;
    if( !POOP ) { slP >> idHomeP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idVersionP ) ;
    if( !POOP ) { slP >> idVersionP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.osDriverParseNameF( tinBaseP , idHomeP , idAdamP , idVersionP , psttP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osEditF_4P6_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( strokeS* , psttP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bAsynchP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAsynchP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAsynchP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osEditF( tinBaseP , psttP , bAsynchP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osEditorF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.osEditorF( tinBaseP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osHttpViewF_4P6_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( boolT , bAsynchP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAsynchP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAsynchP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osHttpViewF( tinBaseP , psttP , bAsynchP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osHttpViewerF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.osHttpViewerF( tinBaseP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT osEnvironmentVariableF_4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttValueP ) ;
    if( !POOP ) { slP >> psttValueP ; ___( psttValueP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttKeyP ) ;
    if( !POOP ) { slP >> psttKeyP ; ___( psttKeyP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.osEnvironmentVariableF( tinBaseP , psttValueP , psttKeyP ) ;
    etherP.delF( tinBaseP , psttKeyP ) ;

    if( !POOP ) slP << psttValueP ;
    etherP.delF( tinBaseP , psttValueP ) ;
}

voidT osFireF_6d_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( boolT , bDoNotComeBackP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bDoNotComeBackP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bDoNotComeBackP ; idArgNext ++ ; }
            }
        }
    }

    nicNameC nicNameP ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                nicNameP = nicNameC() ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
                if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osFireF( tinBaseP , bDoNotComeBackP , nicNameP ) ;
}

voidT osSuspendF_66d_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( boolT , bSleepP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bSleepP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bSleepP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bAllowWakeUpP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAllowWakeUpP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAllowWakeUpP ; idArgNext ++ ; }
            }
        }
    }

    nicNameC nicNameP ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                nicNameP = nicNameC() ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
                if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSuspendF( tinBaseP , bSleepP , bAllowWakeUpP , nicNameP ) ;
}

voidT osMakeHoverFileF_36_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cNameP ) ;
    if( !POOP ) { slP >> cNameP ; idArgNext ++ ; }

    ZE( boolT , bRawNameP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bRawNameP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bRawNameP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osMakeHoverFileF( tinBaseP , cNameP , bRawNameP ) ;
}

voidT osMessageBoxF_4P4P77_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttTitleP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttTitleP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttTitleP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsButtonsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsButtonsP = flMESSAGEbOXbUTTON_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsButtonsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagButtonSelectedP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagButtonSelectedP = flMESSAGEbOXbUTTON_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagButtonSelectedP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.osMessageBoxF( tinBaseP , psttP , psttTitleP , flagsButtonsP , flagButtonSelectedP ) ;
    etherP.delF( tinBaseP , psttTitleP ) ;
    etherP.delF( tinBaseP , psttP ) ;

    slP << noName ;
}

voidT osProcessF_333334P7bPbPbP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osTidP ) ;
    if( !POOP ) { slP >> osTidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osPidP ) ;
    if( !POOP ) { slP >> osPidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , valueP ) ;
    if( !POOP ) { slP >> valueP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idDeathTypeP ) ;
    if( !POOP ) { slP >> idDeathTypeP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flPROCESShIRE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phOutP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phOutP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phOutP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phErrorP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phErrorP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phErrorP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phInP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osProcessF( tinBaseP , osTidP , osPidP , valueP , idDeathTypeP , idAdamP , psttArgsP , flagsP , phOutP , phErrorP , phInP ) ;
    DEL( phInP ) ;
    DEL( phErrorP ) ;
    DEL( phOutP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
}

voidT osProcessF_33334P4P7bPbPbP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osTidP ) ;
    if( !POOP ) { slP >> osTidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osPidP ) ;
    if( !POOP ) { slP >> osPidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , valueP ) ;
    if( !POOP ) { slP >> valueP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idDeathTypeP ) ;
    if( !POOP ) { slP >> idDeathTypeP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttExeP ) ;
    if( !POOP ) { slP >> psttExeP ; ___( psttExeP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flPROCESShIRE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phOutP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phOutP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phOutP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phErrorP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phErrorP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phErrorP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phInP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osProcessF( tinBaseP , osTidP , osPidP , valueP , idDeathTypeP , psttExeP , psttArgsP , flagsP , phOutP , phErrorP , phInP ) ;
    DEL( phInP ) ;
    DEL( phErrorP ) ;
    DEL( phOutP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
    etherP.delF( tinBaseP , psttExeP ) ;
}

voidT osProcessF_3334P7bPbPbP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , tidP ) ;
    if( !POOP ) { slP >> tidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flPROCESShIRE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phOutP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phOutP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phOutP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phErrorP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phErrorP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phErrorP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phInP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osProcessF( tinBaseP , tidP , pidP , idAdamP , psttArgsP , flagsP , phOutP , phErrorP , phInP ) ;
    DEL( phInP ) ;
    DEL( phErrorP ) ;
    DEL( phOutP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
}

voidT osProcessF_334P4P7bPbPbP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , tidP ) ;
    if( !POOP ) { slP >> tidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttExeP ) ;
    if( !POOP ) { slP >> psttExeP ; ___( psttExeP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flPROCESShIRE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phOutP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phOutP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phOutP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phErrorP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phErrorP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phErrorP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801b , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                phInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phInP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osProcessF( tinBaseP , tidP , pidP , psttExeP , psttArgsP , flagsP , phOutP , phErrorP , phInP ) ;
    DEL( phInP ) ;
    DEL( phErrorP ) ;
    DEL( phOutP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
    etherP.delF( tinBaseP , psttExeP ) ;
}

voidT osProcessForwardSignalsToMe_offF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.osProcessForwardSignalsToMe_offF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT osProcessForwardSignalsToMe_onF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.osProcessForwardSignalsToMe_onF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT osProcessIdF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.osProcessIdF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;

    slP << noName ;
}

voidT osProcessInterruptF_3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }
    if( !POOP ) etherP.osProcessInterruptF( tinBaseP , pidP ) ;
}

voidT osProcessKillF_3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }
    if( !POOP ) etherP.osProcessKillF( tinBaseP , pidP ) ;
}

voidT osProcessWaitF_3333_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , valueP ) ;
    if( !POOP ) { slP >> valueP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idDeathTypeP ) ;
    if( !POOP ) { slP >> idDeathTypeP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osTidP ) ;
    if( !POOP ) { slP >> osTidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osPidP ) ;
    if( !POOP ) { slP >> osPidP ; idArgNext ++ ; }
    if( !POOP ) etherP.osProcessWaitF( tinBaseP , valueP , idDeathTypeP , osTidP , osPidP ) ;
}

voidT osSessionF_333334P33337_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osTidP ) ;
    if( !POOP ) { slP >> osTidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osPidP ) ;
    if( !POOP ) { slP >> osPidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , valueP ) ;
    if( !POOP ) { slP >> valueP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idDeathTypeP ) ;
    if( !POOP ) { slP >> idDeathTypeP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSESSION_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSessionF( tinBaseP , osTidP , osPidP , valueP , idDeathTypeP , idAdamP , psttArgsP , idColP , idRowP , cColP , cRowP , flagsP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
}

voidT osSessionF_33334P4P33337_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osTidP ) ;
    if( !POOP ) { slP >> osTidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , osPidP ) ;
    if( !POOP ) { slP >> osPidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , valueP ) ;
    if( !POOP ) { slP >> valueP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idDeathTypeP ) ;
    if( !POOP ) { slP >> idDeathTypeP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttExeP ) ;
    if( !POOP ) { slP >> psttExeP ; ___( psttExeP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSESSION_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSessionF( tinBaseP , osTidP , osPidP , valueP , idDeathTypeP , psttExeP , psttArgsP , idColP , idRowP , cColP , cRowP , flagsP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
    etherP.delF( tinBaseP , psttExeP ) ;
}

voidT osSessionF_3334P33337_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , tidP ) ;
    if( !POOP ) { slP >> tidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idAdamP ) ;
    if( !POOP ) { slP >> idAdamP ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSESSION_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSessionF( tinBaseP , tidP , pidP , idAdamP , psttArgsP , idColP , idRowP , cColP , cRowP , flagsP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
}

voidT osSessionF_334P4P33337_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , tidP ) ;
    if( !POOP ) { slP >> tidP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , pidP ) ;
    if( !POOP ) { slP >> pidP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttExeP ) ;
    if( !POOP ) { slP >> psttExeP ; ___( psttExeP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttArgsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cColP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cColP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cColP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cRowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cRowP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cRowP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSESSION_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSessionF( tinBaseP , tidP , pidP , psttExeP , psttArgsP , idColP , idRowP , cColP , cRowP , flagsP ) ;
    etherP.delF( tinBaseP , psttArgsP ) ;
    etherP.delF( tinBaseP , psttExeP ) ;
}

voidT osSleepF_337_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( countT , timeP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                timeP = TUCK * 16 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> timeP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , timeGrainP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                timeGrainP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> timeGrainP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSLEEP_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.osSleepF( tinBaseP , timeP , timeGrainP , flagsP ) ;
}

voidT osThreadIdF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.osThreadIdF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;

    slP << noName ;
}

voidT osThreadSwitchingOffF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.osThreadSwitchingOffF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT osThreadSwitchingOnF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.osThreadSwitchingOnF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT osTimeSetF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.osTimeSetF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT reportProcessNamePidF_4P4P4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPrefixP ) ;
    if( !POOP ) { slP >> psttPrefixP ; ___( psttPrefixP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSuffixP ) ;
    if( !POOP ) { slP >> psttSuffixP ; ___( psttSuffixP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttUniqueP ) ;
    if( !POOP ) { slP >> psttUniqueP ; ___( psttUniqueP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.reportProcessNamePidF( tinBaseP , psttP , psttPrefixP , psttSuffixP , psttUniqueP ) ;

    if( !POOP ) slP << psttUniqueP ;
    etherP.delF( tinBaseP , psttUniqueP ) ;

    if( !POOP ) slP << psttSuffixP ;
    etherP.delF( tinBaseP , psttSuffixP ) ;

    if( !POOP ) slP << psttPrefixP ;
    etherP.delF( tinBaseP , psttPrefixP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT openSslTls_setupF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.openSslTls_setupF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT openSslTls_shutdownF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.openSslTls_shutdownF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT openSslTls_getContextF_b4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( strokeS* , psttPemCertificatesP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttPemCertificatesP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttPemCertificatesP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttPemPrivateKeyP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttPemPrivateKeyP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttPemPrivateKeyP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.openSslTls_getContextF( tinBaseP , handleP , psttPemCertificatesP , psttPemPrivateKeyP ) ;
    etherP.delF( tinBaseP , psttPemPrivateKeyP ) ;
    etherP.delF( tinBaseP , psttPemCertificatesP ) ;
}

voidT openSslTls_getWrapperF_bb_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hContextP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hContextP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.openSslTls_getWrapperF( tinBaseP , handleP , hContextP ) ;
}

voidT openSslTls_wrapSocketF_bb_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hSocketP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hSocketP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.openSslTls_wrapSocketF( tinBaseP , hWrapperP , hSocketP ) ;
}

voidT openSslTls_shakeHandsAsClientF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.openSslTls_shakeHandsAsClientF( tinBaseP , hWrapperP ) ;
}

voidT openSslTls_shakeHandsAsServerF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.openSslTls_shakeHandsAsServerF( tinBaseP , hWrapperP ) ;
}

voidT openSslTls_writeF_b1P3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

    ZE( countT , cbP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cbP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.openSslTls_writeF( tinBaseP , hWrapperP , pbP , cbP ) ;
    etherP.delF( tinBaseP , pbP ) ;

    slP << noName ;
}

voidT openSslTls_readF_1P3b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbP ) ;
    if( !POOP ) { slP >> cbP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.openSslTls_readF( tinBaseP , pbP , cbP , hWrapperP ) ;
    etherP.delF( tinBaseP , pbP ) ;

    slP << noName ;
}

voidT openSslTls_peekF_1P3b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbP ) ;
    if( !POOP ) { slP >> cbP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.openSslTls_peekF( tinBaseP , pbP , cbP , hWrapperP ) ;
    etherP.delF( tinBaseP , pbP ) ;

    slP << noName ;
}

voidT openSslTls_waveByeF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWrapperP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWrapperP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.openSslTls_waveByeF( tinBaseP , hWrapperP ) ;
}

voidT sockBindF_b3d3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( countT , idPortP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idPortP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }
            }
        }
    }

    nicNameC nicNameP ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                nicNameP = nicNameC() ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
                if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cTriesP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cTriesP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cTriesP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.sockBindF( tinBaseP , handleP , idPortP , nicNameP , cTriesP ) ;

    slP << noName ;
}

voidT sockCancelF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.sockCancelF( tinBaseP , handleP ) ;
}

voidT sockOptionBroadcastF_b6_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( boolT , bAllowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAllowP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAllowP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockOptionBroadcastF( tinBaseP , handleP , bAllowP ) ;
}

voidT sockOptionLingerF_b3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( countT , cSecondsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cSecondsP = TOCK * 0x10 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cSecondsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockOptionLingerF( tinBaseP , handleP , cSecondsP ) ;
}

voidT sockOptionReuseAddressF_b6_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( boolT , bAllowP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAllowP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAllowP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockOptionReuseAddressF( tinBaseP , handleP , bAllowP ) ;
}

voidT sockOptionSendNowF_b6_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

    ZE( boolT , bEnableP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bEnableP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bEnableP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockOptionSendNowF( tinBaseP , handleP , bEnableP ) ;
}
