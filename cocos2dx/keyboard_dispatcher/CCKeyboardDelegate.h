#ifndef __CCKEYBOARD_DELEGATE_H__
#define __CCKEYBOARD_DELEGATE_H__

#include "cocoa/CCObject.h"

NS_CC_BEGIN

/**
 * @addtogroup input
 * @{
 */

class CC_DLL CCKeyboardDelegate
{
public:
    virtual void keyDown(int keyCode) {}
    virtual void keyUp(int keyCode) {};
};

/**
@brief
CCKeypadHandler
Object than contains the CCKeypadDelegate.
*/
class CC_DLL CCKeyboardHandler : public CCObject
{
public:
    virtual ~CCKeyboardHandler(void);

    /** delegate */
    CCKeyboardDelegate* getDelegate();
    void setDelegate(CCKeyboardDelegate *pDelegate);

    /** initializes a CCKeypadHandler with a delegate */
    virtual bool initWithDelegate(CCKeyboardDelegate *pDelegate);

public:
    /** allocates a CCKeypadHandler with a delegate */
    static CCKeyboardHandler* handlerWithDelegate(CCKeyboardDelegate *pDelegate);

protected:
    CCKeyboardDelegate* m_pDelegate;
};

// end of input group
/// @} 

NS_CC_END

#endif // __CCKEYBOARD_DELEGATE_H__
