
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

voidT filterGrabMouseF( tinNormalS& tinP , const countT cArgP ) ;
voidT popButtonsF(     tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;
voidT replaceButtonsF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
voidT pushButtonsF(    tinNormalS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
countT clockPhraseF( tinNormalS& tinP , etherC& etherP , strokeS*& psttP , vTextC** const ppvtClockP , const countT cpvtClockP , const measureT rShrinkP = 1.0 / 16.0 ) ;
voidT setClockHandsF( tinNormalS& tinP , etherC& etherP , vTextC** ppvtClockP , const countT cpvtClockP , vTextC* const pvtHintP , countT time1P , sCountT time2P , const measureT rReachP , const strokeS* const psttLabelP = 0 , countT idWothP = 0 ) ;
voidT doDownF( tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;
voidT brF( tinNormalS& tinP , etherC& etherP , treeC& treeP , byteT*& pbContentP , countT& cbContentP , const byteT* const pbEndP , const flagsT flagsP , const strokeS* const psttP ) ;
voidT loadContentF( tinNormalS& tinP , etherC& etherP , const countT cArgP , byteT*& pbContentP , countT& cbContentP ) ;
voidT resizeIfF( tinNormalS& tinP , countT cArgP , etherC& etherP ) ;
voidT freshViewOfBranchesF( tinNormalS& tinP , etherC& etherP , countT cArgP ) ;
voidT setTmShortF( tinNormalS& tinP , textC& tP ) ;
voidT setTmLongF( tinNormalS& tinP , textC& tP ) ;
voidT setFullScreenConsoleF( tinNormalS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setConsoleF( tinNormalS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setBannerF( tinNormalS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setFloorF( tinNormalS& tinP , etherC& etherP , const countT cArgP , countT idFloorP , const flagsT flagsP = flSETfLOOR_null ) ;
voidT napF( tinNormalS& tinP , etherC& etherP , const countT time1P ) ;
countT squeezeF( tinNormalS& tinP , etherC& etherP , strokeS*& psttOutP , const strokeS* const psttInP , const countT csttMinP ) ;
voidT vtButtonsF( tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;
voidT hintEyeF( tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;
voidT hintF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttP , const countT time1P = TOCK * 8 , const flagsT flagsP = flHINT_null ) ;
voidT purgeSpeechF( tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;
voidT speakF( tinNormalS& tinP , etherC& etherP , stackC& stSpeechP , const strokeS* const psttP , const strokeS* const psttHintP = 0 , const countT timeHint1P = 0 ) ;
voidT speechEpilogF( tinNormalS& tinP , etherC& etherP , const countT cArgP ) ;

voidT gameShownCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT readTheseInstructionsCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt2bigitCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vtToolStateCapsLockCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt1tutorialCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
boolT vtGraphSpeedCBF( tinNormalS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtViewCBF( tinNormalS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtTestCBF( tinNormalS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtEyeCBF( tinNormalS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
voidT animateSpeechCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateMonitorPoolNamesCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedMinMaxCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateTestCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote5CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote4CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote3CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote1CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateHoverPadCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockBannerCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateViewsCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateCBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT buHoverPadCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buViewCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockLaunchCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerLabelCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltLeftCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltRightCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimDownCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimUpCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimLeftCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimRightCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimTiltResetCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveUpCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveDownCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveNorthCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveSouthCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveEastCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveWestCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveResetCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEscapeCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEnterCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbRightCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbLeftCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbUpCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbDownCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT prPromptCBF(   tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSubscribeCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buLoginKeyCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buGateCBF(      tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buCreditsCBF(   tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSermonCBF(    tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buIntroCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buStartGameCBF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buConsoleCBF(   tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buTestCBF(   tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSecureCBF(   tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFcCBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFbCBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFaCBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF9CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF8CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF7CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF6CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF5CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF4CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF3CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF2CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF1CBF(        tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEscapeCBF(    tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buDisagreeCBF(  tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buAgreeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT buContent1bigitfUCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitEeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitDeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitCeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitBeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitAyCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitNiCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitTaCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitVeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitSeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitfICBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitFoCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitReCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitOoCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitWoCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitZeCBF(     tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT loadSpeechF( tinNormalS& tinP , etherC& etherP , const countT cArgP , const countT idSpeechP ) ;

;
}
    friend voidT animateEyeNote5CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote4CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote3CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote1CBF( tinNormalS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;

    paramS( tinNormalS& tinP , etherC& etherP ) ;
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
    buttonListS( tinNormalS& tinP , etherC& etherP , const strokeS* const psttButtonsP , countT csttMinP , const strokeS* const psttHintP , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
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

#define BR(flagSuffP,psttP) brF( tinP , etherP , paramP.treeKt , pbContentP , cbContentP , pbContentP + CBcONTENTaLLOC , flBRANCHs_##flagSuffP , psttP )
#define CBcONTENTaLLOC TOCK
#define SW { windowOldC* pRoot = windowOldC::getRefIF( tinP ) ; if( pRoot ) { pRoot->selectPaperF( tinP , ifcIDcMDpAPERsELECT_SETsHOW , ifcIDpAPER_NOTsHOW ) ; pRoot->letRefF() ; } }
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

