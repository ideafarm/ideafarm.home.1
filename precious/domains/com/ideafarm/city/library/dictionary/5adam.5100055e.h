
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
// Respecting the rights of other people is an important part of empowering one another.
//


//}
//    return 1 ;
//    BLAMMO ;
//    //LOGrAW( "@@@@@@@@@@@@@@@@@ MATH ERROR @@@@@@@@@@@@@@@@@@@@@@\r\n" ) ;
//    TINSL
//{
//extern "C" int matherr( struct exception *err )
//U::GET THIS TO WORK

TASK0PROTO( tmSetFloorUsersF ) ;
TASK0PROTO( tmRestoreTabbingF ) ;

voidT filterGrabMouseF( tin0S& tin0P , const countT cArgP ) ;
voidT popButtonsF(     tin0S& tin0P , etherC& etherP , const countT cArgP ) ;
voidT replaceButtonsF( tin0S& tin0P , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
voidT pushButtonsF(    tin0S& tin0P , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
countT clockPhraseF( tin0S& tin0P , etherC& etherP , strokeS*& psttP , vTextC** const ppvtClockP , const countT cpvtClockP , const measureT rShrinkP = 1.0 / 16.0 ) ;
voidT setClockHandsF( tin0S& tin0P , etherC& etherP , vTextC** ppvtClockP , const countT cpvtClockP , vTextC* const pvtHintP , countT time1P , sCountT time2P , const measureT rReachP , const strokeS* const psttLabelP = 0 , countT idWothP = 0 ) ;
voidT doDownF( tin0S& tin0P , etherC& etherP , const countT cArgP ) ;
voidT brF( tin0S& tin0P , etherC& etherP , treeC& treeP , byteT*& pbContentP , countT& cbContentP , const byteT* const pbEndP , const flagsT flagsP , const strokeS* const psttP ) ;
voidT loadContentF( tin0S& tin0P , etherC& etherP , const countT cArgP , byteT*& pbContentP , countT& cbContentP ) ;
voidT resizeIfF( tin0S& tin0P , countT cArgP , etherC& etherP ) ;
voidT freshViewOfBranchesF( tin0S& tin0P , etherC& etherP , countT cArgP ) ;
voidT setTmShortF( tin0S& tin0P , textC& tP ) ;
voidT setTmLongF( tin0S& tin0P , textC& tP ) ;
voidT setFullScreenConsoleF( tin0S& tin0P , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setConsoleF( tin0S& tin0P , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setBannerF( tin0S& tin0P , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setFloorF( tin0S& tin0P , etherC& etherP , const countT cArgP , countT idFloorP , const flagsT flagsP = flSETfLOOR_null ) ;
voidT napF( tin0S& tin0P , etherC& etherP , const countT time1P ) ;
countT squeezeF( tin0S& tin0P , etherC& etherP , strokeS*& psttOutP , const strokeS* const psttInP , const countT csttMinP ) ;
voidT vtButtonsF( tin0S& tin0P , etherC& etherP , const countT cArgP ) ;
voidT hintEyeF( tin0S& tin0P , etherC& etherP , const countT cArgP ) ;
voidT hintF( tin0S& tin0P , etherC& etherP , const countT cArgP , const strokeS* const psttP , const countT time1P = TOCK * 8 , const flagsT flagsP = flHINT_null ) ;
voidT purgeSpeechF( tin0S& tin0P , etherC& etherP , const countT cArgP ) ;
voidT speakF( tin0S& tin0P , etherC& etherP , stackC& stSpeechP , const strokeS* const psttP , const strokeS* const psttHintP = 0 , const countT timeHint1P = 0 ) ;
voidT speechEpilogF( tin0S& tin0P , etherC& etherP , const countT cArgP ) ;

voidT gameShownCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT readTheseInstructionsCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt2bigitCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vtToolStateCapsLockCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt1tutorialCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
boolT vtGraphSpeedCBF( tin0S& tin0P , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtViewCBF( tin0S& tin0P , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtTestCBF( tin0S& tin0P , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtEyeCBF( tin0S& tin0P , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
voidT animateSpeechCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateMonitorPoolNamesCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedMinMaxCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateTestCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote5CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote4CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote3CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote1CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateHoverPadCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockBannerCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateViewsCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateCBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT buHoverPadCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buViewCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockLaunchCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerLabelCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltLeftCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltRightCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimDownCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimUpCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimLeftCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimRightCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimTiltResetCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveUpCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveDownCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveNorthCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveSouthCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveEastCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveWestCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveResetCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEscapeCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEnterCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbRightCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbLeftCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbUpCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbDownCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT prPromptCBF(   tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSubscribeCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buLoginKeyCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buGateCBF(      tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buCreditsCBF(   tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSermonCBF(    tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buIntroCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buStartGameCBF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buConsoleCBF(   tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buTestCBF(   tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSecureCBF(   tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFcCBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFbCBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFaCBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF9CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF8CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF7CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF6CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF5CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF4CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF3CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF2CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF1CBF(        tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEscapeCBF(    tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buDisagreeCBF(  tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buAgreeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT buContent1bigitfUCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitEeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitDeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitCeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitBeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitAyCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitNiCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitTaCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitVeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitSeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitfICBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitFoCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitReCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitOoCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitWoCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitZeCBF(     tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT loadSpeechF( tin0S& tin0P , etherC& etherP , const countT cArgP , const countT idSpeechP ) ;

;
}
    friend voidT animateEyeNote5CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote4CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote3CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote1CBF( tin0S& tin0P , etherC& etherP , const countT idCycleP , const countT cArgP ) ;

    paramS( tin0S& tin0P , etherC& etherP ) ;
    ~paramS( voidT ) ;

    countT       offLoginSecret ;
    strokeS*     ppsttLoginSecret[ 8 ] ; //CS: CODEsYNC 4650104.h 4650104.h
    tcButtonC    buLoginKey8 ;           //CS: CODEsYNC 4650104.h 4650104.h
    tcButtonC    buLoginKey7 ;
    tcButtonC    buLoginKey6 ;
    tcButtonC    buLoginKey5 ;
    tcButtonC    buLoginKey4 ;
    tcButtonC    buLoginKey3 ;
    tcButtonC    buLoginKey2 ;
    tcButtonC    buLoginKey1 ;
    tcPromptC    prPrompt ;
    tcButtonC    buStartGame ;
    tcButtonC    buContent1bigitfU ;
    tcButtonC    buContent1bigitEe ;
    tcButtonC    buContent1bigitDe ;
    tcButtonC    buContent1bigitCe ;
    tcButtonC    buContent1bigitBe ;
    tcButtonC    buContent1bigitAy ;
    tcButtonC    buContent1bigitNi ;
    tcButtonC    buContent1bigitTa ;
    tcButtonC    buContent1bigitVe ;
    tcButtonC    buContent1bigitSe ;
    tcButtonC    buContent1bigitfI ;
    tcButtonC    buContent1bigitFo ;
    tcButtonC    buContent1bigitRe ;
    tcButtonC    buContent1bigitOo ;
    tcButtonC    buContent1bigitWo ;
    tcButtonC    buContent1bigitZe ;
    tcButtonC    buHoverPad ;
    tcButtonC    buClockBannerLabel ;
    tcButtonC    buClockLaunch ;
    tcButtonC    buSubscribe ;
    tcButtonC    buClockBanner ;
    tcButtonC    buClock ;
    tcButtonC    buEyeTiltLeft ;
    tcButtonC    buEyeTiltRight ;
    tcButtonC    buEyeAimDown ;
    tcButtonC    buEyeAimUp ;
    tcButtonC    buEyeAimLeft ;
    tcButtonC    buEyeAimRight ;
    tcButtonC    buEyeAimTiltReset ;
    tcButtonC    buEyeMoveUp ;
    tcButtonC    buEyeMoveDown ;
    tcButtonC    buEyeMoveNorth ;
    tcButtonC    buEyeMoveSouth ;
    tcButtonC    buEyeMoveEast ;
    tcButtonC    buEyeMoveWest ;
    tcButtonC    buEyeMoveReset ;
    tcButtonC    buEyeEscape ;
    tcButtonC    buEyeEnter ;
    tcButtonC    buClimbRight ;
    tcButtonC    buClimbLeft ;
    tcButtonC    buClimbUp ;
    tcButtonC    buClimbDown ;
    tcButtonC    buDisagree ;
    tcButtonC    buAgree ;
    tcButtonC    buSermon ;
    tcButtonC    buCredits ;
    tcButtonC    buIntro ;
    tcButtonC    buGate ;
    tcButtonC    buConsole ;
    testesS      debug2 ;
    tcButtonC    buTest ;
    tcButtonC    buSecure ;
    testesS      debug1 ;
    tcButtonC    buFc;
    tcButtonC    buFb ;
    tcButtonC    buFa ;
    tcButtonC    buF9 ;
    tcButtonC    buF8 ;
    tcButtonC    buF7 ;
    tcButtonC    buF6 ;
    tcButtonC    buF5 ;
    tcButtonC    buF4 ;
    tcButtonC    buF3 ;
    tcButtonC    buF2 ;
    tcButtonC    buF1 ;
    tcButtonC    buEscape ;
    vTextC       vtToolStateCapsLock ;
    vTextC       vt2bigitHelp ;
    vTextC       vt2bigitName ;
    vTextC       vt2bigit ;
    vTextC       vtHoverPadAnimation ;
    vTextC       vtHoverPad ;
    vTextC       vt1tutorial ;
    vTextC       vtGraphSpeed ;
    vTextC       vtGraphSpeedMinMax ;
    vTextC       vtMonitorPoolNames ;
    vTextC       vtHintClockBanner ;
    vTextC       vtHintClock ;
    vTextC       vtView ;
    vTextC       vtEyeNote5 ;
    vTextC       vtEyeNote4 ;
    vTextC       vtEyeNote3 ;
    vTextC       vtEyeNote2 ;
    vTextC       vtEyeNote1 ;
    vTextC       vtEye ;
    vTextC       vtButtonsPad ;
    vTextC       vtButtons ;
    vTextC       vtHint ;
    vTextC       vtSlidesRemaining ;
    vTextC       vtSpeech ;
    vTextC       vtTest ;
    textC        tHoverPadDrag ;
    textC        tHoverPad ;
    textC        tHintDefault ;
    windowOldC&     win ;
    eyeOldC         eye ;
    stackC       stButtonList ;
    treeC        treeKt ;
    stackC       stSpeech ;
    batonC       bHoverPadDrag ;
    batonC       bOldViews ;
    tcButtonC**  pptcView ;
    vTextC*      ppvtClock[ 0xd ] ;
    vTextC*      ppvtClockBanner[ 0xa ] ;
    public :
    strokeS*     psttPromptValue ;
    private :
    strokeS*     psttHintEscape ;
    strokeS*     psttLabelRemaining ;
    measureT     rReachRemaining ;
    sCountT      timeGameErased2 ;
    sCountT      timeHintExpires2 ;
    countT       idEventViewSelectLath ;
    countT       timeGameErased1 ;
    countT       idView ;
    const countT cpvtClock ;
    const countT cpvtClockBanner ;
    countT       cvtView ;
    countT       cRight ;
    countT       cLeft ;
    countT       cUp ;
    countT       cDown ;
    countT       timeHintExpires1 ;
    countT       idSpeech ;
    countT       idSpeak ;
    measureT     zMoveMultiplier ;
    measureT     yMoveMultiplier ;
    measureT     xMoveMultiplier ;
    measureT     zMoveGrain ;
    measureT     yMoveGrain ;
    measureT     xMoveGrain ;
    measureT     zHullAt ;
    measureT     yHullAt ;
    measureT     xHullAt ;
    countT       offHullAimtTick ;
    countT       offHullAimvTick ;
    countT       offHullAimhTick ;
    countT       cHullAimtTicks ;
    countT       cHullAimvTicks ;
    countT       cHullAimhTicks ;
    countT       idFloor ;
    boolT        bQuitTmUsers ;
    boolT        bInside ;
    boolT        bEyeStarted ;
    boolT        bGameStarted ;
    boolT        bReadingInstructions ;
    boolT        b1tutorial ;
    boolT        bAnimating ;
    boolT        bBegin ;
    flagsT       flags ;
    etherC&      ether ;
{
struct paramS

;
}
    ~testesS( voidT ) ;
{
struct testesS
//U::

;
}
    buttonListS( tin0S& tin0P , etherC& etherP , const strokeS* const psttButtonsP , countT csttMinP , const strokeS* const psttHintP , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
    buttonListS( voidT ) ;
    ~buttonListS( voidT ) ;

    public :

    flagsT flagsHint ;
    countT time1Hint ;
    strokeS* psttHint ;
    countT csttMin ;
    strokeS* psttButtons ;
{
struct buttonListS

//#define ZhULLaTiNIT (-256.0)
//#define YhULLaTiNIT (0.0)
//#define XhULLaTiNIT (0.0)
//#define ZhULLaTiNIT (-256.0)
//#define YhULLaTiNIT (128.0)
//#define XhULLaTiNIT (128.0)

#define ZhULLaTiNIT (-256.0)
#define YhULLaTiNIT (0.0)
#define XhULLaTiNIT (0.0)

#define CSTTmINbUTTONS  (0x20)
#define CSTTmINsPEAK  (0x10)
#define CSTTmINhINT  (0x20)

#define ifcIDsPEECH_REFUSAL                    0xa
#define ifcIDsPEECH_ACCEPTANCE                 0x9
#define ifcIDsPEECH_AGREEMENT                  0x8
#define ifcIDsPEECH_SERMON                     0x7
#define ifcIDsPEECH_CREDITS                    0x6
#define ifcIDsPEECH_INTRODUCTION               0x5
#define ifcIDsPEECH_FLOORdISCLOSURE            0x4
#define ifcIDsPEECH_FLOORsECRET                0x3
#define ifcIDsPEECH_FLOORuSERS                 0x2
#define ifcIDsPEECH_FLOORbANNER                0x1

#define ARGgET(cArgP) paramS& paramP = *(paramS*)cArgP ;

#define flSETfLOOR_ESCAPE           0xe00001ff
#define flSETfLOOR_null             0xe00000ff

#define flPARAM_EYEbUTTONSrENDERED  0xe00002ff
#define flPARAM_FULLsCREEN          0xe00001ff
#define flPARAM_null                0xe00000ff

#define flHINT_EVENiFfULLsCREEN     0xe00004ff
#define flHINT_TRACE                0xe00002ff
#define flHINT_IFdEFAULT            0xe00001ff
#define flHINT_null                 0xe00000ff

#define AIMtICKhORZbIASdEBUG 0
#define AIMtICKvERTbIASdEBUG 0

#define AIMtICKS 0x20

//U:: #define AIMgRAIN ( 1.0 / TUCK )
#define AIMgRAIN ( 1.0 / 16.0 )

#define ifcIDvIEW_max 2
#define ifcIDvIEW_HUGE 2
#define ifcIDvIEW_HOLLYWOOD 1
#define ifcIDvIEW_min 1

#define BR(flagSuffP,psttP) brF( tin0P , etherP , paramP.treeKt , pbContentP , cbContentP , pbContentP + CBcONTENTaLLOC , flBRANCHs_##flagSuffP , psttP )
#define CBcONTENTaLLOC TOCK
#define SW { windowOldC* pRoot = windowOldC::getRefIF( tin0P ) ; if( pRoot ) { pRoot->selectPaperF( tin0P , ifcIDcMDpAPERsELECT_SETsHOW , ifcIDpAPER_NOTsHOW ) ; pRoot->letRefF() ; } }
#define PERIOD 0x20

#define ifcIDfLOOR_CONSOLE          0x5
#define ifcIDfLOOR_DISCLOSURE       0x4
#define ifcIDfLOOR_PROMPTfORsECRET  0x3
#define ifcIDfLOOR_USERS            0x2
#define ifcIDfLOOR_BANNER           0x1

/*1*//*header*//*1*/
/**/
*/
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//

