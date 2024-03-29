#ifndef __APPMACROS_H__
#define __APPMACROS_H__

#include "cocos2d.h"

/* For demonstrating using one design resolution to match different resources,
 or one resource to match different design resolutions.
 
 [Situation 1] Using one design resolution to match different resources.
 Please look into Appdelegate::applicationDidFinishLaunching.
 We check current device frame size to decide which resource need to be selected.
 So if you want to test this situation which said in title '[Situation 1]',
 you should change ios simulator to different device(e.g. iphone, iphone-retina3.5, iphone-retina4.0, ipad, ipad-retina),
 or change the window size in "proj.XXX/main.cpp" by "CCEGLView::setFrameSize" if you are using win32 or linux plaform
 and modify "proj.mac/AppController.mm" by changing the window rectangle.
 
 [Situation 2] Using one resource to match different design resolutions.
 The coordinates in your codes is based on your current design resolution rather than resource size.
 Therefore, your design resolution could be very large and your resource size could be small.
 To test this, just define the marco 'TARGET_DESIGN_RESOLUTION_SIZE' to 'DESIGN_RESOLUTION_2048X1536'
 and open iphone simulator or create a window of 480x320 size.
 
 [Note] Normally, developer just need to define one design resolution(e.g. 960x640) with one or more resources.
 */


typedef struct tagResource
{
    cocos2d::CCSize size;
    char directory[100];
}Resource;

static Resource smallResource  =  { cocos2d::CCSizeMake(384, 512),   "resources-small" };
static Resource largeResource =  { cocos2d::CCSizeMake(768, 1024),  "resources-large"   };
static Resource xlargeResource  =  { cocos2d::CCSizeMake(1536, 2048), "resources-xlarge" };


static cocos2d::CCSize designResolutionSize = cocos2d::CCSizeMake(768, 1024);


#endif /* __APPMACROS_H__ */
