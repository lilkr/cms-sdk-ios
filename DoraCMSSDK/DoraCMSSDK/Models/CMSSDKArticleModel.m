//
//  CMSSDKArticleModel.m
//  DoraCMSSDK
//
//  Created by Diana on 2/10/16.
//  Copyright © 2016 maintiendrai. All rights reserved.
//

#import "CMSSDKArticleModel.h"

@implementation CMSSDKArticleModel

+ (id)modelFromData:(NSDictionary* )data {
    CMSSDKArticleModel* model = [super modelFromData:data];
    if (model) {
        model.aid       = data[@"_id"];
        model.title     = data[@"title"];
        model.subTitle  = data[@"stitle"];
        model.pictureThumbnailURL = data[@"sImg"];
        model.url       = data[@"url"];
    }
    return model;
}

- (NSString* )description {
    return [NSString stringWithFormat:@"aid:%@, title:%@, subTitle:%@, pictureThumbnailURL:%@, url:%@", self.aid, self.title, self.subTitle, self.pictureThumbnailURL, self.url];
}


@end
