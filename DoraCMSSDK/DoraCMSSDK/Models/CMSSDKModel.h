//
//  CMSSDKModel.h
//  DoraCMSSDK
//
//  Created by Diana on 2/10/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#import <Foundation/Foundation.h>

/** model基类 */
@interface CMSSDKModel : NSObject

/** model的ID */
@property (nonatomic, strong) NSString *aid;

/**
 * model类方法
 *
 * @param data 数据源
 * @return model类
 */
+ (id)modelFromData:(NSDictionary* )data;

@end
