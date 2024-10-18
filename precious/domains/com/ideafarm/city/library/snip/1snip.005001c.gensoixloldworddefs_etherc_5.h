
voidT strFromIdPortNicNameF_o4P3d_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , idPortP ) ;
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
                idPortP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
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
           pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                nicNameP = nicNameC() ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
                if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFromIdPortNicNameF( tin0P , psttP , idPortP , nicNameP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strFromProcessF_o4P4P4P4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttErrorP ) ;
    if( !POOP ) { slP >> psttErrorP ; ___( psttErrorP ) ; idArgNext ++ ; }

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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttArgsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttArgsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttInP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFromProcessF( tin0P , psttOutP , psttErrorP , psttExeP , psttArgsP , psttInP ) ;
    etherP.delF( tin0P , psttInP ) ;
    etherP.delF( tin0P , psttArgsP ) ;
    etherP.delF( tin0P , psttExeP ) ;

    if( !POOP ) slP << psttErrorP ;
    etherP.delF( tin0P , psttErrorP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tin0P , psttOutP ) ;
}

voidT strFromUrlF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFromUrlF( tin0P , psttP , psttOldP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strFromJsonF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strFromJsonF( tin0P , psttP , psttFromP ) ;
    etherP.delF( tin0P , psttFromP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strFromIdJotF_o4P33_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idJotP ) ;
    if( !POOP ) { slP >> idJotP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbJotStringDecodePrefixP ) ;
    if( !POOP ) { slP >> cbJotStringDecodePrefixP ; idArgNext ++ ; }
    if( !POOP ) etherP.strFromIdJotF( tin0P , psttP , idJotP , cbJotStringDecodePrefixP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strFuseSeparateF_o4P4P33hPgrabCP3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttInP ) ;
    if( !POOP ) { slP >> psttInP ; ___( psttInP ) ; idArgNext ++ ; }

    ZE( countT , csttPrefixNullsP ) ;
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
                csttPrefixNullsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttPrefixNullsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttSuffixNullsP ) ;
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
                csttSuffixNullsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttSuffixNullsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( soulC* , pSoulP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8019 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pSoulP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8019 , etherC )
                if( !POOP ) { slP >> pSoulP ; idArgNext ++ ; }
            }
        }
    }

    ZE( grabC* , pGrabP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801a , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pGrabP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801a , etherC )
                if( !POOP ) { slP >> pGrabP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFuseSeparateF( tin0P , psttOutP , psttInP , csttPrefixNullsP , csttSuffixNullsP , pSoulP , pGrabP , csttExtraP ) ;
    DEL( pGrabP ) ;
    DEL( pSoulP ) ;
    etherP.delF( tin0P , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tin0P , psttOutP ) ;
}

voidT strKTTrimF_o4P4P33_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldBigP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldBigP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldBigP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cKeepP ) ;
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
                cKeepP = 0x10 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cKeepP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strKTTrimF( tin0P , psttNewBigP , psttOldBigP , cKeepP , csttExtraP ) ;
    etherP.delF( tin0P , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tin0P , psttNewBigP ) ;

    slP << noName ;
}

voidT strIdLathExpressionF_o4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idsWothP ) ;
    if( !POOP ) { slP >> idsWothP ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strIdLathExpressionF( tin0P , psttSmallP , idsWothP ) ;
    etherP.delF( tin0P , psttSmallP ) ;

    slP << noName ;
}

voidT strIndentF_o4P4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( strokeS* , psttOldP ) ;
    if( !POOP ) { slP >> psttOldP ; ___( psttOldP ) ; idArgNext ++ ; }

    ZE( countT , csttP ) ;
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
                csttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strIndentF( tin0P , psttP , psttOldP , csttP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strInsertF_o4P34P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idFirstP ) ;
    if( !POOP ) { slP >> idFirstP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strInsertF( tin0P , psttP , idFirstP , psttSmallP , csttExtraP ) ;
    etherP.delF( tin0P , psttSmallP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strInsertF_o4P4P4P73_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( strokeS* , psttMarkP ) ;
    if( !POOP ) { slP >> psttMarkP ; ___( psttMarkP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttWhatP ) ;
    if( !POOP ) { slP >> psttWhatP ; ___( psttWhatP ) ; idArgNext ++ ; }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRiNSERT_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strInsertF( tin0P , psttP , psttMarkP , psttWhatP , flagsP , csttExtraP ) ;
    etherP.delF( tin0P , psttWhatP ) ;
    etherP.delF( tin0P , psttMarkP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strIsDigitsF_o4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , radixP ) ;
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
                radixP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> radixP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strIsDigitsF( tin0P , psttP , radixP ) ;
    etherP.delF( tin0P , psttP ) ;

    slP << noName ;
}

voidT strBodyLengthF_o2P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strBodyLengthF( tin0P , postP ) ;
    etherP.delF( tin0P , postP ) ;

    slP << noName ;
}

voidT strCLinesF_o4P4P6_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttEndP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttEndP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttEndP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bAnyP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAnyP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAnyP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strCLinesF( tin0P , psttP , psttEndP , bAnyP ) ;
    etherP.delF( tin0P , psttEndP ) ;
    etherP.delF( tin0P , psttP ) ;

    slP << noName ;
}

voidT strMakeFromOsTextF_o4P2P33_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    ZE( countT , costP ) ;
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
                costP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strMakeFromOsTextF( tin0P , psttP , postP , costP , csttExtraP ) ;
    etherP.delF( tin0P , postP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strMakeF_o33pbRefCP4P37_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd801c , etherC )
    SOIXLoLDtESTtYPE( 0xdddd801c , etherC )
    ZE( pbRefC* , prP ) ;
    if( !POOP ) { slP >> prP ; ___( prP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( countT , costExtraP ) ;
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
                costExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costExtraP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRmAKE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strMakeF( tin0P , idLineP , idiFileP , prP , psttP , costExtraP , flagsP ) ;
    etherP.delF( tin0P , psttP ) ;

    if( !POOP ) slP << prP ;
    DEL( prP ) ;

    slP << noName ;
}

voidT strMakeF_o332P4P373_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( countT , costExtraP ) ;
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
                costExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costExtraP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRmAKE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cbPrefixExtraP ) ;
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
                cbPrefixExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbPrefixExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strMakeF( tin0P , idLineP , idiFileP , postP , psttP , costExtraP , flagsP , cbPrefixExtraP ) ;
    etherP.delF( tin0P , psttP ) ;

    if( !POOP ) slP << postP ;
    etherP.delF( tin0P , postP ) ;

    slP << noName ;
}

voidT strMakeF_o334P4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttInP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strMakeF( tin0P , idLineP , idiFileP , psttOutP , psttInP , csttExtraP ) ;
    etherP.delF( tin0P , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tin0P , psttOutP ) ;
}

voidT strRemoveBlankLinesF_o4P4P4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttItemDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttItemDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttItemDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttDoomedListP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDoomedListP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDoomedListP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strRemoveBlankLinesF( tin0P , psttP , psttOldP , psttItemDelimiterP , psttDoomedListP ) ;
    etherP.delF( tin0P , psttDoomedListP ) ;
    etherP.delF( tin0P , psttItemDelimiterP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strReplaceF_o4P4P4P4P37_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldSmallP ) ;
    if( !POOP ) { slP >> psttOldSmallP ; ___( psttOldSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewSmallP ) ;
    if( !POOP ) { slP >> psttNewSmallP ; ___( psttNewSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceF( tin0P , psttNewBigP , psttOldBigP , psttOldSmallP , psttNewSmallP , csttExtraP , flagsP ) ;
    etherP.delF( tin0P , psttNewSmallP ) ;
    etherP.delF( tin0P , psttOldSmallP ) ;
    etherP.delF( tin0P , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tin0P , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceF_o4P4P337_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idTypeP ) ;
    if( !POOP ) { slP >> idTypeP ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceF( tin0P , psttNewBigP , psttOldBigP , idTypeP , csttExtraP , flagsP ) ;
    etherP.delF( tin0P , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tin0P , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceAnyF_o4P4P4P4P37_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldSmallP ) ;
    if( !POOP ) { slP >> psttOldSmallP ; ___( psttOldSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewSmallP ) ;
    if( !POOP ) { slP >> psttNewSmallP ; ___( psttNewSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceAnyF( tin0P , psttNewBigP , psttOldBigP , psttOldSmallP , psttNewSmallP , csttExtraP , flagsP ) ;
    etherP.delF( tin0P , psttNewSmallP ) ;
    etherP.delF( tin0P , psttOldSmallP ) ;
    etherP.delF( tin0P , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tin0P , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceAutomaticallyF_o4P4P33_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idClassP ) ;
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
                idClassP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idClassP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strReplaceAutomaticallyF( tin0P , psttP , psttOldP , idClassP , csttExtraP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strReverseF_o4P4P4PhPgrabCP3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( soulC* , pSoulP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8019 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pSoulP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8019 , etherC )
                if( !POOP ) { slP >> pSoulP ; idArgNext ++ ; }
            }
        }
    }

    ZE( grabC* , pGrabP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801a , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pGrabP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801a , etherC )
                if( !POOP ) { slP >> pGrabP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strReverseF( tin0P , psttP , psttOldP , psttDelimiterP , pSoulP , pGrabP , csttExtraP ) ;
    DEL( pGrabP ) ;
    DEL( pSoulP ) ;
    etherP.delF( tin0P , psttDelimiterP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strRulerF_o4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , csP ) ;
    if( !POOP ) { slP >> csP ; idArgNext ++ ; }
    if( !POOP ) etherP.strRulerF( tin0P , psttP , csP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strSubstringF_o4P334P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idFirstP ) ;
    if( !POOP ) { slP >> idFirstP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLastP ) ;
    if( !POOP ) { slP >> idLastP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strSubstringF( tin0P , psttP , idFirstP , idLastP , psttBigP , csttExtraP ) ;
    etherP.delF( tin0P , psttBigP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strGetMimeHeaderF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttToP ) ;
    if( !POOP ) { slP >> psttToP ; ___( psttToP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strGetMimeHeaderF( tin0P , psttToP , psttFromP ) ;
    etherP.delF( tin0P , psttFromP ) ;

    if( !POOP ) slP << psttToP ;
    etherP.delF( tin0P , psttToP ) ;
}

voidT strGetMimeBodyF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttToP ) ;
    if( !POOP ) { slP >> psttToP ; ___( psttToP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strGetMimeBodyF( tin0P , psttToP , psttFromP ) ;
    etherP.delF( tin0P , psttFromP ) ;

    if( !POOP ) slP << psttToP ;
    etherP.delF( tin0P , psttToP ) ;
}

voidT strSubstringMimeHeaderF_o4P4P4P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( strokeS* , psttAllP ) ;
    if( !POOP ) { slP >> psttAllP ; ___( psttAllP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttKeyP ) ;
    if( !POOP ) { slP >> psttKeyP ; ___( psttKeyP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strSubstringMimeHeaderF( tin0P , psttP , psttAllP , psttKeyP , csttExtraP ) ;
    etherP.delF( tin0P , psttKeyP ) ;
    etherP.delF( tin0P , psttAllP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strToHtmlF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToHtmlF( tin0P , psttP , psttOldP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strToUrlF_o4P4P7_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRtOuRL_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToUrlF( tin0P , psttP , psttOldP , flagsP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strToFileNameF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToFileNameF( tin0P , psttP , psttOldP ) ;
    etherP.delF( tin0P , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strUniqueF_o4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strUniqueF( tin0P , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strUrlDecodeF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttInP ) ;
    if( !POOP ) { slP >> psttInP ; ___( psttInP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlDecodeF( tin0P , psttOutP , psttInP ) ;
    etherP.delF( tin0P , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tin0P , psttOutP ) ;
}

voidT strUrlDecodeF_o4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strUrlDecodeF( tin0P , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strUrlNameF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNameP ) ;
    if( !POOP ) { slP >> psttNameP ; ___( psttNameP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttUrlP ) ;
    if( !POOP ) { slP >> psttUrlP ; ___( psttUrlP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlNameF( tin0P , psttNameP , psttUrlP ) ;
    etherP.delF( tin0P , psttUrlP ) ;

    if( !POOP ) slP << psttNameP ;
    etherP.delF( tin0P , psttNameP ) ;
}

voidT strUrlSchemeF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSchemeP ) ;
    if( !POOP ) { slP >> psttSchemeP ; ___( psttSchemeP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttUrlP ) ;
    if( !POOP ) { slP >> psttUrlP ; ___( psttUrlP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlSchemeF( tin0P , psttSchemeP , psttUrlP ) ;
    etherP.delF( tin0P , psttUrlP ) ;

    if( !POOP ) slP << psttSchemeP ;
    etherP.delF( tin0P , psttSchemeP ) ;
}

voidT strEncode_01F_o1P1P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pboP ) ;
    if( !POOP ) { slP >> pboP ; ___( pboP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbiP ) ;
    if( !POOP ) { slP >> pbiP ; ___( pbiP ) ; idArgNext ++ ; }

    ZE( countT , cbiP ) ;
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
                cbiP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbiP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strEncode_01F( tin0P , pboP , pbiP , cbiP ) ;
    etherP.delF( tin0P , pbiP ) ;

    if( !POOP ) slP << pboP ;
    etherP.delF( tin0P , pboP ) ;

    slP << noName ;
}

voidT strEncodeF_o1P4P1P31P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( strokeS* , psttP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttP ; idArgNext ++ ; }
            }
        }
    }

    ZE( byteT* , pbeP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pbeP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
                if( !POOP ) { slP >> pbeP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cbHeadP ) ;
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
                cbHeadP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbHeadP ; idArgNext ++ ; }
            }
        }
    }

    ZE( byteT* , pbHeadP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pbHeadP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
                if( !POOP ) { slP >> pbHeadP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strEncodeF( tin0P , pbP , psttP , pbeP , cbHeadP , pbHeadP ) ;
    etherP.delF( tin0P , pbHeadP ) ;
    etherP.delF( tin0P , pbeP ) ;
    etherP.delF( tin0P , psttP ) ;

    if( !POOP ) slP << pbP ;
    etherP.delF( tin0P , pbP ) ;

    slP << noName ;
}

voidT strDecodeF_o4P1P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strDecodeF( tin0P , psttP , pbP ) ;
    etherP.delF( tin0P , pbP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;

    slP << noName ;
}

voidT strBisectF_o4P4P4P4P373_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPart1P ) ;
    if( !POOP ) { slP >> psttPart1P ; ___( psttPart1P ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPart2P ) ;
    if( !POOP ) { slP >> psttPart2P ; ___( psttPart2P ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idP ) ;
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
                idP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRbISECT_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strBisectF( tin0P , psttPart1P , psttPart2P , psttBigP , psttDelimiterP , idP , flagsP , csttExtraP ) ;
    etherP.delF( tin0P , psttDelimiterP ) ;
    etherP.delF( tin0P , psttBigP ) ;

    if( !POOP ) slP << psttPart2P ;
    etherP.delF( tin0P , psttPart2P ) ;

    if( !POOP ) slP << psttPart1P ;
    etherP.delF( tin0P , psttPart1P ) ;

    slP << noName ;
}

voidT strFileMatchF_o4P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttLikeP ) ;
    if( !POOP ) { slP >> psttLikeP ; ___( psttLikeP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strFileMatchF( tin0P , psttLikeP , psttP ) ;
    etherP.delF( tin0P , psttP ) ;
    etherP.delF( tin0P , psttLikeP ) ;

    slP << noName ;
}

voidT strEncodeBlobToRFC4648F_o4P1P3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbP ) ;
    if( !POOP ) { slP >> cbP ; idArgNext ++ ; }
    if( !POOP ) etherP.strEncodeBlobToRFC4648F( tin0P , psttP , pbP , cbP ) ;
    etherP.delF( tin0P , pbP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tin0P , psttP ) ;
}

voidT strDecodeBlobFromRFC4648F_o1P34P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strDecodeBlobFromRFC4648F( tin0P , pbP , cbP , psttP ) ;
    etherP.delF( tin0P , psttP ) ;

    if( !POOP ) slP << pbP ;
    etherP.delF( tin0P , pbP ) ;
}

voidT sssTestF_o64P4P334P4P_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0x0 , etherC )
   SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( boolT , bDoNotAdvanceBigP ) ;
    if( !POOP ) { slP >> bDoNotAdvanceBigP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idsDoP ) ;
    if( !POOP ) { slP >> idsDoP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idbDoP ) ;
    if( !POOP ) { slP >> idbDoP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBlackP ) ;
    if( !POOP ) { slP >> psttBlackP ; ___( psttBlackP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPunctuationP ) ;
    if( !POOP ) { slP >> psttPunctuationP ; ___( psttPunctuationP ) ; idArgNext ++ ; }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.sssTestF( tin0P , bDoNotAdvanceBigP , psttSmallP , psttBigP , idsDoP , idbDoP , psttBlackP , psttPunctuationP ) ;
    etherP.delF( tin0P , psttPunctuationP ) ;
    etherP.delF( tin0P , psttBlackP ) ;
    etherP.delF( tin0P , psttBigP ) ;
    etherP.delF( tin0P , psttSmallP ) ;

    slP << noName ;
}

voidT winAppendTitleF_o4Pb_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    handleC hWindowP( /*FOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                hWindowP = handleC( *pTinF() , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
                if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.winAppendTitleF( tin0P , psttP , hWindowP ) ;
    etherP.delF( tin0P , psttP ) ;
}

voidT winPostMessageAfterNapF_o3b333_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , time1P ) ;
    if( !POOP ) { slP >> time1P ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWindowP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idCmdP ) ;
    if( !POOP ) { slP >> idCmdP ; idArgNext ++ ; }

    ZE( countT , arg1P ) ;
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
                arg1P = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> arg1P ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , arg2P ) ;
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
                arg2P = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> arg2P ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.winPostMessageAfterNapF( tin0P , time1P , hWindowP , idCmdP , arg1P , arg2P ) ;
}

voidT winSetTitleF_o4Pb_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    handleC hWindowP( /*FOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                hWindowP = handleC( *pTinF() , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
                if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.winSetTitleF( tin0P , psttP , hWindowP ) ;
    etherP.delF( tin0P , psttP ) ;

    slP << noName ;
}

voidT cioSetupF_o_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.cioSetupF( tin0P ) ;
    if( ((tin1S&)tin0P).fingerprint && _psttNameP && slP ) ;
}

voidT cioSetQuitF_o6_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.cioSetQuitF( tin0P , bQuitP ) ;
}

voidT cioSetArgF_o3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cArgP ) ;
    if( !POOP ) { slP >> cArgP ; idArgNext ++ ; }
    if( !POOP ) etherP.cioSetArgF( tin0P , cArgP ) ;
}

voidT traceF_o4P73_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttP ; idArgNext ++ ; }
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
            pbFieldNext = slP.pbFieldF( tin0P , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flTRACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idDivertP ) ;
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
                idDivertP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idDivertP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.traceF( tin0P , psttP , flagsP , idDivertP ) ;
    etherP.delF( tin0P , psttP ) ;
}

voidT tracePoolTalliesF_o_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.tracePoolTalliesF( tin0P ) ;
    if( ((tin1S&)tin0P).fingerprint && _psttNameP && slP ) ;
}

voidT traceMemoryGrainRptF_o3_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( countT , idTypeP ) ;
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
                idTypeP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tin0P , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idTypeP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.traceMemoryGrainRptF( tin0P , idTypeP ) ;
}

voidT hushWritePrivateKeyToFileF_o4Pb_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFileP ) ;
    if( !POOP ) { slP >> psttFileP ; ___( psttFileP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushWritePrivateKeyToFileF( tin0P , psttFileP , handleP ) ;
    etherP.delF( tin0P , psttFileP ) ;
}

voidT hushWritePublicKeyToFileF_o4Pb_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFileP ) ;
    if( !POOP ) { slP >> psttFileP ; ___( psttFileP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushWritePublicKeyToFileF( tin0P , psttFileP , handleP ) ;
    etherP.delF( tin0P , psttFileP ) ;
}

voidT hushGetPublicKeyF_o1P3b_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushGetPublicKeyF( tin0P , pbP , cbP , handleP ) ;

    if( !POOP ) slP << pbP ;
    etherP.delF( tin0P , pbP ) ;
}

voidT hushGetPrivateKeyF_o1P3b_GF( tin0S& tin0P , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    handleC handleP( /*GOOEY*/tin0P , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.hushGetPrivateKeyF( tin0P , pbP , cbP , handleP ) ;

    if( !POOP ) slP << pbP ;
    etherP.delF( tin0P , pbP ) ;
}

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
