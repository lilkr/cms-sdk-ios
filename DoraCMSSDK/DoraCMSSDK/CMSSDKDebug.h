//
//  CMSSDKDebug.h
//  DoraCMSSDK
//
//  Created by Diana on 2/11/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#ifdef DEBUG
#define __FILE_WITHOUT_PATH__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define CMSSDKDebug(fmt, ...) \
do {\
NSLog(@"DoraCMSSDK===>" fmt, ##__VA_ARGS__);\
} while(0);

#else
#define CMSSDKDebug(fmt, ...);
#endif
