//
//  CMSSDKRequest.h
//  DoraCMSSDK
//
//  Created by Diana on 2/11/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CMSSDKRequest;
@class CMSSDKError;

typedef void(^CMSSDKCompletion)(CMSSDKRequest* request, CMSSDKError* error);

@interface CMSSDKRequest : NSObject


/** 请求session */
@property (nonatomic, strong) NSURLSession* session;

/** 请求结束回调 */
@property (nonatomic, copy) CMSSDKCompletion completion;

/** 请求类方法 */
+ (instancetype)request;

/** 开始请求 */
- (void)start;

/** 取消请求 */
- (void)cancel;

/** 是否需要使用配置（需要在子类实现） */
- (BOOL)shouldUseConfig;

/** 请求的uri（需要在子类实现） */
- (NSString* )uri;



@end
