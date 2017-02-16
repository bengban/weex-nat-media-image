//
//  NatWeexImage.h
//
//  Created by huangyake on 17/1/7.
//  Copyright © 2017 Nat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@protocol NatImagePro <WXModuleProtocol>

- (void)pick:(NSDictionary *)params :(WXModuleCallback)callback;
- (void)preview:(NSArray *)files :(NSDictionary *)params :(WXModuleCallback)callback;
- (void)info:(NSString *)path :(WXModuleCallback)callback;
- (void)exif:(NSString *)path :(WXModuleCallback)callback;


@end

@interface NatWeexImage : NSObject<NatImagePro>
@end
