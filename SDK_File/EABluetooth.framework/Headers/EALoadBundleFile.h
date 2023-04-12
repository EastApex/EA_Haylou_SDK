//
//  EALoadBundleFile.h
//  EABluetooth
//
//  Created by Aye on 2022/9/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <EABluetooth/EAEnum.h>
#import <EABluetooth/EAWatchModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface EALoadBundleFile : NSObject



//+ (UIImage *)eaLoadImageWithImageName:(NSString *)imageName small:(BOOL)small colorType:(EACWFTimerColorType)colorType styleType:(EACWFStyleType)styleType;
//
//+ (UIImage *)eaLoadImageWithSmall:(BOOL)small colorType:(EACWFTimerColorType )colorType scaleStyle:(EACWFPointerScaleStyle)scaleStyle;


+ (UIImage *)eaLoadImageWithWatchModel:(EAWatchModel *)eaWatchModel imageName:(NSString *)imageName styleType:(EACWFStyleType)styleType colorType:(EACWFTimerColorType )colorType scaleStyle:(EACWFPointerScaleStyle)scaleStyle;


+ (UIImage *)eaLoadHlImageWithImageName:(NSString *)imageName;

+ (NSDictionary *)eaLoadJsonWithJsonName:(NSString *)jsonName;
+ (NSString *)eaLoadFontPathWithFontName:(NSString *)fontName;


@end

NS_ASSUME_NONNULL_END
