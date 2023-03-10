//
//  EALoadBundleFile.h
//  EABluetooth
//
//  Created by Aye on 2022/9/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <EABluetooth/EAEnum.h>
NS_ASSUME_NONNULL_BEGIN

@interface EALoadBundleFile : NSObject

//// 将EAWatchFace添加在工程里使用
//+ (NSString *)loadBundleImagePathWithImageName:(NSString *)imageName small:(BOOL)small screenType:(EAScreenType )screenType;
//+ (NSString *)loadBundleJsonPathWithJsonName:(NSString *)jsonName;
//
//// 使用cocoapods将EAWatchFace添加在工程里使用
//+ (UIImage *)loadBundleImageWithImageName:(NSString *)imageName small:(BOOL)small screenType:(EAScreenType )screenType;
//+ (NSDictionary *)loadBundleJsonWithJsonName:(NSString *)jsonName;



+ (UIImage *)eaLoadImageWithImageName:(NSString *)imageName small:(BOOL)small colorType:(EACWFTimerColorType)colorType styleType:(EACWFStyleType)styleType;

+ (UIImage *)eaLoadImageWithSmall:(BOOL)small colorType:(EACWFTimerColorType )colorType scaleStyle:(EACWFPointerScaleStyle)scaleStyle;

+ (UIImage *)eaLoadCustomImageWithImageName:(NSString *)imageName;
+ (UIImage *)eaLoadHlImageWithImageName:(NSString *)imageName;

+ (NSDictionary *)eaLoadJsonWithJsonName:(NSString *)jsonName;
+ (NSString *)eaLoadFontPathWithFontName:(NSString *)fontName;
@end

NS_ASSUME_NONNULL_END
