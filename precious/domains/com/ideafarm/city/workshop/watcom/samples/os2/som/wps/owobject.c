
/*
 *  This file was generated by the SOM Compiler and Emitter Framework.
 *  Generated using:
 *      SOM Emitter emitctm: 2.43
 */

#ifndef SOM_Module_owobject_Source
#define SOM_Module_owobject_Source
#endif
#define OWObject_Class_Source
#define M_OWObject_Class_Source

#include "owobject.ih"

// identifiers for settings saved/resored for this subclass
#define SETTINGSKEY_TESTVALUE 1


SOM_Scope ULONG  SOMLINK OWS_sampInsertWelcomePage(OWObject *somSelf,
                                                   HWND hwndDlg)
{
    // --- own code starts

    PAGEINFO  pi;

    // --- own code ends

    /* OWObjectData *somThis = OWObjectGetData(somSelf); */
    OWObjectMethodDebug("OWObject","OWS_sampInsertWelcomePage");

    // --- own code starts

    // add welcome page to properties notebook
    memset( (PCH) &pi, 0, sizeof( PAGEINFO ) );
    pi.cb                  = sizeof( PAGEINFO );
    pi.hwndPage            = NULLHANDLE;
    pi.usPageStyleFlags    = BKA_MAJOR;
    pi.usPageInsertFlags   = BKA_FIRST;
    pi.pfnwp               = NbPageProc;
    pi.resid               = GetModuleHandle();
    pi.dlgid               = IDDLG_PAGE_WELCOME;
    pi.pszName             = "~Welcome";
    pi.pCreateParams       = (PVOID) somSelf;
    pi.pszHelpLibraryName  = NULL;

    return _wpInsertSettingsPage( somSelf, hwndDlg, &pi );

    // --- own code ends
}

SOM_Scope void  SOMLINK OWS_wpInitData(OWObject *somSelf)
{
    OWObjectData *somThis = OWObjectGetData(somSelf);
    OWObjectMethodDebug("OWObject","OWS_wpInitData");

    OWObject_parent_WPAbstract_wpInitData(somSelf);

    // --- own code starts

    // initialize object instance variables
    _ulTestValue = 0;
    _hwndNotebookPage = NULLHANDLE;

    // get resources (such as of PM etc.)
    // ... none required here

    // --- own code ends

}

SOM_Scope void  SOMLINK OWS_wpUnInitData(OWObject *somSelf)
{
    /* OWObjectData *somThis = OWObjectGetData(somSelf); */
    OWObjectMethodDebug("OWObject","OWS_wpUnInitData");

    // --- own code starts

    // free resources (such as of PM etc.)
    // obtained by OWS_wpInitData
    // ... none requird here

    // --- own code ends

    OWObject_parent_WPAbstract_wpUnInitData(somSelf);
}

SOM_Scope BOOL  SOMLINK OWS_wpSaveState(OWObject *somSelf)
{
    OWObjectData *somThis = OWObjectGetData(somSelf);
    OWObjectMethodDebug("OWObject","OWS_wpSaveState");

    // --- own code starts

    // store values of member vars to OS2.INI
    // somCN_OWObject is defined in the .ih
    // file and contains the class name
    _wpSaveLong( somSelf, somCN_OWObject, SETTINGSKEY_TESTVALUE, _ulTestValue);

    // --- own code ends

    return (OWObject_parent_WPAbstract_wpSaveState(somSelf));
}

SOM_Scope BOOL  SOMLINK OWS_wpRestoreState(OWObject *somSelf,
                                           ULONG ulReserved)
{
    OWObjectData *somThis = OWObjectGetData(somSelf);
    OWObjectMethodDebug("OWObject","OWS_wpRestoreState");

    // --- own code starts

    // read values from OS2.INI into the member vars here
    // somCN_OWObject is defined in the .ih
    // file and contains the class name
    _wpRestoreLong( somSelf, somCN_OWObject, SETTINGSKEY_TESTVALUE, &_ulTestValue);

    // --- own code ends

    return (OWObject_parent_WPAbstract_wpRestoreState(somSelf,
                                                      ulReserved));
}

SOM_Scope BOOL  SOMLINK OWS_wpAddSettingsPages(OWObject *somSelf,
                                               HWND hwndNotebook)
{
    // --- own vars start

    BOOL fResult;

    // --- own vars end

    /* OWObjectData *somThis = OWObjectGetData(somSelf); */
    OWObjectMethodDebug("OWObject","OWS_wpAddSettingsPages");

    // --- modified code starts

    // call parent method first to add pages of
    // parent class to properties notebook
    fResult = OWObject_parent_WPAbstract_wpAddSettingsPages(somSelf, hwndNotebook);

    // --- modified code ends

    // --- own code starts

    // add own pages to properties notebook
    _sampInsertWelcomePage( somSelf, hwndNotebook);
    return  fResult;

    // --- own code ends
}

SOM_Scope ULONG  SOMLINK OWS_wpAddObjectWindowPage(OWObject *somSelf,
                                                   HWND hwndNotebook)
{
    OWObjectData *somThis = OWObjectGetData(somSelf);
    OWObjectMethodDebug("OWObject","OWS_wpAddObjectWindowPage");

    // --- modified code starts

    // don't add Window page to properties notebook
    return SETTINGS_PAGE_REMOVED;

    // --- modified code ends
}

SOM_Scope BOOL  SOMLINK OWS_wpSetup(OWObject *somSelf, PSZ pszSetupString)
{

    // --- own code starts

    BOOL  fGuiUpdateRequired = FALSE;
    ULONG ulValue;
    CHAR  szValue[ 64];
    ULONG ulValueLen = sizeof( szValue);
    PSZ   pszEndPtr;

    // --- own code ends

    OWObjectData *somThis = OWObjectGetData(somSelf);
    OWObjectMethodDebug("OWObject","OWS_wpSetup");

    // --- own code starts

    // evaluate settings string here
    // check for our string TESTVALUE
    if (_wpScanSetupString( somSelf, pszSetupString, "TESTVALUE",
                           szValue, &ulValueLen))
      {
      // check if it is a numeric value
      ulValue = strtol( szValue, &pszEndPtr, 10);
      if ((pszEndPtr) && (!*pszEndPtr))
        {
        // check range
        if (ulValue <= 10)
           {
           _ulTestValue = ulValue;
           fGuiUpdateRequired = TRUE;
           }
        }
      }

    // update notebook page if it is loaded
    if ((fGuiUpdateRequired) && (_hwndNotebookPage))
       WinPostMsg( _hwndNotebookPage, WM_USER_UPDATECONTROLS, 0, 0);

    // --- own code ends

    return (OWObject_parent_WPAbstract_wpSetup(somSelf, pszSetupString));
}


SOM_Scope void  SOMLINK MOWS_wpclsInitData(M_OWObject *somSelf)
{
    M_OWObjectData *somThis = M_OWObjectGetData(somSelf);
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsInitData");

    M_OWObject_parent_M_WPAbstract_wpclsInitData(somSelf);

    // --- own code starts

    // --- get resources (such as of PM etc.) used by all object instances

    _pszMleText =  GetTextfileResourceData(  GetModuleHandle(),
                                             RT_USER_DATAFILE,
                                             IDRES_TEXT_WELCOME);

    // --- own code ends
}

SOM_Scope void  SOMLINK MOWS_wpclsUnInitData(M_OWObject *somSelf)
{
    M_OWObjectData *somThis = M_OWObjectGetData(somSelf);
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsUnInitData");

    // --- own code starts

    // free resources (such as of PM etc.)
    // obtained by OWS_wpInitData
    if (_pszMleText) free( _pszMleText);

    // --- own code ends

    M_OWObject_parent_M_WPAbstract_wpclsUnInitData(somSelf);
}

SOM_Scope ULONG  SOMLINK MOWS_wpclsQueryIconData(M_OWObject *somSelf,
                                                 PICONINFO pIconInfo)
{
    /* M_OWObjectData *somThis = M_OWObjectGetData(somSelf); */
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsQueryIconData");

    // --- modified code starts

    // provide own icon for all object instances of this class
    if (pIconInfo)
       {
       pIconInfo->fFormat = ICON_RESOURCE;
       pIconInfo->hmod    = GetModuleHandle();
       pIconInfo->resid   = IDRES_ICON;
       }
    return sizeof(ICONINFO);

    // --- modified code ends
}

SOM_Scope PSZ  SOMLINK MOWS_wpclsQueryTitle(M_OWObject *somSelf)
{
    /* M_OWObjectData *somThis = M_OWObjectGetData(somSelf); */
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsQueryTitle");

    // --- own code starts

    // provide class title for all object instances of this class
    return "Open Watcom Sample";

    // --- own code ends
}


SOM_Scope ULONG  SOMLINK MOWS_wpclsQueryStyle(M_OWObject *somSelf)
{
    /* M_OWObjectData *somThis = M_OWObjectGetData(somSelf); */
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsQueryStyle");

    // --- modified code starts

    // remove unwanted object style bit for all object instances of this class
    // -- don't add print item to object context menu
    return (M_OWObject_parent_M_WPAbstract_wpclsQueryStyle(somSelf) | CLSSTYLE_NEVERPRINT);

    // --- modified code ends
}

SOM_Scope BOOL  SOMLINK MOWS_wpclsCreateDefaultTemplates(M_OWObject *somSelf,
                                                         WPObject* Folder)
{
    /* M_OWObjectData *somThis = M_OWObjectGetData(somSelf); */
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsCreateDefaultTemplates");

    // --- modified code starts

    // do not create default template in template folder
    return TRUE;

    // --- modified code ends
}


SOM_Scope ULONG  SOMLINK MOWS_wpclsQueryDefaultView(M_OWObject *somSelf)
{
    M_OWObjectData *somThis = M_OWObjectGetData(somSelf);
    M_OWObjectMethodDebug("M_OWObject","MOWS_wpclsQueryDefaultView");

    // --- modified code starts

    // open properties as default view
    return OPEN_SETTINGS;

    // --- modified code ends
}
