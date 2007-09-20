/****************************************************************************
*** Includes ****************************************************************
****************************************************************************/

#include <proto/feelin.h>

#include <libraries/feelin.h>
#include <feelin/preference.h>

/****************************************************************************
*** Attributes & Methods ****************************************************
****************************************************************************/

enum    {

        FA_Scrollbar_Type,
        FA_Scrollbar_Entries,
        FA_Scrollbar_First,
        FA_Scrollbar_Visible

        };

/****************************************************************************
*** Object ******************************************************************
****************************************************************************/

struct LocalObjectData
{
    FAreaPublic        *AreaPublic;
 
    FObject             Button1;
    FObject             Button2;
    FObject             Prop;
//  Preferences
    STRPTR              p_Type;
};

/****************************************************************************
*** Preferences *************************************************************
****************************************************************************/

struct p_LocalObjectData
{
    FObject                         radio_entries[3 + 1];
};
