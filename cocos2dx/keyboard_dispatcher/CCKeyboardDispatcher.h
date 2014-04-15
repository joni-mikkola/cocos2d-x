#ifndef __CCKEYBOARD_DISPATCHER_H__
#define __CCKEYBOARD_DISPATCHER_H__

#include "CCKeyboardDelegate.h"
#include "cocoa/CCArray.h"

NS_CC_BEGIN

/**
 * @addtogroup input
 * @{
 */

struct _ccCArray;
/**
@class CCKeyboardDispatcher
@brief Dispatch the keypad message from the phone
*/
class CC_DLL CCKeyboardDispatcher : public CCObject
{
public:
    CCKeyboardDispatcher();
    ~CCKeyboardDispatcher();

    /**
    @brief add delegate to concern keypad msg
    */
    void addDelegate(CCKeyboardDelegate* pDelegate);

    /**
    @brief remove the delegate from the delegates who concern keypad msg
    */
    void removeDelegate(CCKeyboardDelegate* pDelegate);

    /**
    @brief force add the delegate
    */
    void forceAddDelegate(CCKeyboardDelegate* pDelegate);

    /**
    @brief force remove the delegate
    */
    void forceRemoveDelegate(CCKeyboardDelegate* pDelegate);

    /**
    @brief dispatch the key pad msg
    */
    bool dispatchKeyboardMSG(int keyCode, bool ifkeyDown);

protected:

    CCArray* m_pDelegates;
    bool m_bLocked;
    bool m_bToAdd;
    bool m_bToRemove;

    struct _ccCArray *m_pHandlersToAdd;
    struct _ccCArray *m_pHandlersToRemove;
};

// end of input group
/// @} 

NS_CC_END

#endif //__CCKEYBOARD_DISPATCHER_H__
