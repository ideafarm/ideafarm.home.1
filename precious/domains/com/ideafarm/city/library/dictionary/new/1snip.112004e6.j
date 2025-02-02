
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
// Respecting the rights of other people is an important part of empowering one another.
//

    )
                : (byteT*)( *((tin123S&)tin0P).ppJot[ ( (countT)(idJotP) & ~BM_HIGH ) >> sizeof( countT ) * SB - 4 ] )[ (countT)(idJotP) ] )      \
                ? (byteT*)0                                                                                                                     \
            : tin0P.idTypeTin != ifcIDtYPEtIN_123                                                                                              \
            ? (byteT*)(idJotP)                                                                                                                  \
        !( (countT)(idJotP) & BM_HIGH )                                                                                                         \
    (                                                                                                                                           \
                                                                                                                                                \
#define J(idJotP)                                                                                                                               \

/*1*//*J(idJotP)*//*1*/

/**/
*/
this macro detects an invalid jPointer value and, if valid, evaluates to the (const byteT*) value that is to be used
a jPointer is any pointer that might contain either a memory address or wo of the special jPointer constants
the use of this macro makes code "jPointer aware"
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//

