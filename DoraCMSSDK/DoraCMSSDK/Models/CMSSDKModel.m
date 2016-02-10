//
//  CMSSDKModel.m
//  DoraCMSSDK
//
//  Created by Diana on 2/10/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#import "CMSSDKModel.h"

@implementation CMSSDKModel

+ (id)modelFromData:(NSDictionary* )data {
    if (!data || ![[data allKeys] count]) return nil;
    return [[[self class] alloc] init];
}

@end
