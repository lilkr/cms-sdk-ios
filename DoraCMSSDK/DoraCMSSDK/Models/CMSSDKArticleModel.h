//
//  CMSSDKArticleModel.h
//  DoraCMSSDK
//
//  Created by Diana on 2/10/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#import "CMSSDKModel.h"

@interface CMSSDKArticleModel : CMSSDKModel

/** 文章标题 */
@property (nonatomic, strong) NSString* title;

/** 文章子标题 */
@property (nonatomic, strong) NSString* subTitle;

/** 文章url */
@property (nonatomic, strong) NSString* url;

/** 文章缩略图 */
@property (nonatomic, strong) NSString* pictureThumbnailURL;


@end
