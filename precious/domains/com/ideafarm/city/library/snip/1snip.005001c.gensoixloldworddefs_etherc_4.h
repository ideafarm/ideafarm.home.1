
voidT sockOptionDualStackF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.sockOptionDualStackF( tinBaseP , handleP ) ;
}

voidT sockOptionMulticastF_b4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttAddrP ) ;
    if( !POOP ) { slP >> psttAddrP ; ___( psttAddrP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.sockOptionMulticastF( tinBaseP , handleP , psttAddrP ) ;
    etherP.delF( tinBaseP , psttAddrP ) ;
}

voidT socksSetupF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.socksSetupF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT socksShutdownF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.socksShutdownF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT sockF_b6bP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( boolT , idTypeP ) ;
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
                idTypeP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> idTypeP ; idArgNext ++ ; }
            }
        }
    }

    ZE( handleC* , phContextP ) ;
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
                phContextP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phContextP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockF( tinBaseP , handleP , idTypeP , phContextP ) ;
    DEL( phContextP ) ;
}

voidT chokeAttackerF_b33_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , cbRequestReadP ) ;
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
                cbRequestReadP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbRequestReadP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cbRequestWriteP ) ;
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
                cbRequestWriteP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbRequestWriteP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.chokeAttackerF( tinBaseP , handleP , cbRequestReadP , cbRequestWriteP ) ;
}

voidT sockAcceptF_b3db6bP_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hClientP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hClientP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
    nicNameC nicNameP ;
    if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0x0 , etherC )
   SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( boolT , bRefuseP ) ;
    if( !POOP ) { slP >> bRefuseP ; idArgNext ++ ; }

    ZE( handleC* , phContextP ) ;
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
                phContextP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801b , etherC )
                if( !POOP ) { slP >> phContextP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockAcceptF( tinBaseP , hClientP , idPortP , nicNameP , handleP , bRefuseP , phContextP ) ;
    DEL( phContextP ) ;
}

voidT sockListenF_b_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.sockListenF( tinBaseP , handleP ) ;
}

voidT sockMyNameF_3db_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
    nicNameC nicNameP ;
    if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.sockMyNameF( tinBaseP , idPortP , nicNameP , handleP ) ;
}

voidT sockPeerNameF_3db_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
    nicNameC nicNameP ;
    if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }
    if( !POOP ) etherP.sockPeerNameF( tinBaseP , idPortP , nicNameP , handleP ) ;
}

voidT sockReadF_61P3b3_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    handleC handleP( /*GOOEY*/tinBaseP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { handleP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cProcessedP ) ;
    if( !POOP ) { slP >> cProcessedP ; idArgNext ++ ; }
    if( !POOP ) etherP.sockReadF( tinBaseP , bQuitP , pbP , cbP , handleP , cProcessedP ) ;
    etherP.delF( tinBaseP , pbP ) ;
}

voidT sockWriteF_b1P33_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , idModeP ) ;
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
                idModeP = ifcIDmODEsOCKETS_NOTeNCRYPTED ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idModeP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockWriteF( tinBaseP , handleP , pbP , cbP , idModeP ) ;
    etherP.delF( tinBaseP , pbP ) ;
}

voidT sockWriteF_b3d1P33_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8006 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8006 , etherC )
    nicNameC nicNameP ;
    if( !POOP ) { nicNameP << slP ; idArgNext ++ ; }

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

    ZE( countT , idModeP ) ;
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
                idModeP = ifcIDmODEsOCKETS_NOTeNCRYPTED ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idModeP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.sockWriteF( tinBaseP , handleP , idPortP , nicNameP , pbP , cbP , idModeP ) ;
    etherP.delF( tinBaseP , pbP ) ;
}

voidT sockWriteQuitF_3d_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

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
    if( !POOP ) etherP.sockWriteQuitF( tinBaseP , idPortP , nicNameP ) ;
}

voidT sockWriteQuitF_34P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idPortP ) ;
    if( !POOP ) { slP >> idPortP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttHostP ) ;
    if( !POOP ) { slP >> psttHostP ; ___( psttHostP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.sockWriteQuitF( tinBaseP , idPortP , psttHostP ) ;
    etherP.delF( tinBaseP , psttHostP ) ;
}

voidT sockFtpServerF__GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.sockFtpServerF( tinBaseP ) ;
    if( ((tinNormalS&)tinBaseP).fingerprint && _psttNameP && slP ) ;
}

voidT sockNicNameF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    nicNameC noName ;
    if( !POOP ) noName = etherP.sockNicNameF( tinBaseP , psttP ) ;
    etherP.delF( tinBaseP , psttP ) ;

    noName >> slP ;
}

voidT sockPsttHostF_4Pd_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.sockPsttHostF( tinBaseP , psttP , nicNameP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strAbridgeF_4P4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
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
            pbFieldNext = slP.pbFieldF( tinBaseP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDelimiterP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strAbridgeF( tinBaseP , psttP , psttOldP , psttDelimiterP ) ;
    etherP.delF( tinBaseP , psttDelimiterP ) ;
    etherP.delF( tinBaseP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strAsciiCodeTableF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strAsciiCodeTableF( tinBaseP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strBadCodeLineF_4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( strokeS* , psttIdAdamP ) ;
    if( !POOP ) { slP >> psttIdAdamP ; ___( psttIdAdamP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strBadCodeLineF( tinBaseP , psttP , psttIdAdamP ) ;
    etherP.delF( tinBaseP , psttIdAdamP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strClockF_4P333333334P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    ZE( countT , cP ) ;
    if( !POOP ) { slP >> cP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idColP ) ;
    if( !POOP ) { slP >> idColP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idRowP ) ;
    if( !POOP ) { slP >> idRowP ; idArgNext ++ ; }

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
                cColP = 0x100 ;
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
                cRowP = 0x100 ;
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

    ZE( countT , idStyleP ) ;
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
                idStyleP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idStyleP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idFirstP ) ;
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
                idFirstP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idFirstP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idLastP ) ;
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
                idLastP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idLastP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttNoteP ) ;
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
                psttNoteP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttNoteP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strClockF( tinBaseP , psttP , cP , idColP , idRowP , cColP , cRowP , idStyleP , idFirstP , idLastP , psttNoteP ) ;
    etherP.delF( tinBaseP , psttNoteP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToLowerCaseF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToLowerCaseF( tinBaseP , psttP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToLowerCaseF_4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToLowerCaseF( tinBaseP , psttP , psttFromP ) ;
    etherP.delF( tinBaseP , psttFromP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToOtherCaseF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToOtherCaseF( tinBaseP , psttP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToOtherCaseF_4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToOtherCaseF( tinBaseP , psttP , psttFromP ) ;
    etherP.delF( tinBaseP , psttFromP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToUpperCaseF_4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToUpperCaseF( tinBaseP , psttP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strConvertToUpperCaseF_4P4P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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
    if( !POOP ) etherP.strConvertToUpperCaseF( tinBaseP , psttP , psttFromP ) ;
    etherP.delF( tinBaseP , psttFromP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strDeleteF_4P33_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , idLastP ) ;
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
                idLastP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idLastP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strDeleteF( tinBaseP , psttP , idFirstP , idLastP ) ;
    etherP.delF( tinBaseP , psttP ) ;
}

voidT strDigitsToNicNameF_4P36_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , defaultRadixP ) ;
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
                defaultRadixP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> defaultRadixP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bForeignP ) ;
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
                bForeignP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bForeignP ; idArgNext ++ ; }
            }
        }
    }

    nicNameC noName ;
    if( !POOP ) noName = etherP.strDigitsToNicNameF( tinBaseP , psttP , defaultRadixP , bForeignP ) ;
    etherP.delF( tinBaseP , psttP ) ;

    noName >> slP ;
}

voidT strDigitsToMeasureF_4P36_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , defaultRadixP ) ;
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
                defaultRadixP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> defaultRadixP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bForeignP ) ;
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
                bForeignP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bForeignP ; idArgNext ++ ; }
            }
        }
    }

    ZE( measureT , noName ) ;
    if( !POOP ) noName = etherP.strDigitsToMeasureF( tinBaseP , psttP , defaultRadixP , bForeignP ) ;
    etherP.delF( tinBaseP , psttP ) ;

    slP << noName ;
}

voidT strEvaluateF_4P34P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttOldP ) ;
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
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strEvaluateF( tinBaseP , psttP , csttExtraP , psttOldP ) ;
    etherP.delF( tinBaseP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;

    slP << noName ;
}

voidT strEvaluateFormat01F_4P34P_GF( tinBaseS& tinBaseP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
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

    ZE( countT , csttExtraP ) ;
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
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttOldP ) ;
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
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinBaseP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strEvaluateFormat01F( tinBaseP , psttP , csttExtraP , psttOldP ) ;
    etherP.delF( tinBaseP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinBaseP , psttP ) ;

    slP << noName ;
}
