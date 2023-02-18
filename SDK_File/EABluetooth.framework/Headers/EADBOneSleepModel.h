//
//  EADBSleepModel.h
//  EABluetooth
//
//  Created by Aye on 2023/2/16.
//

#import "EADBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EADBOneSleepModel : EADBBaseModel


@property NSInteger startTimestamp;
@property NSInteger endTimestamp;
@property NSInteger totalMinutes;
@property NSInteger lightSleepMinutes;
@property NSInteger deepSleepMinutes;
@property NSInteger awakeSleepMinutes;
@property NSInteger remSleepMinutes;
@property NSInteger awakeCount;

/// 时间戳字符串（逗号隔开）
@property NSString *timestamps;

/// 睡眠状态字符串==》EASleepNode（逗号隔开）
@property NSString *sleepNodes;

@property (readonly) NSArray *timestampArray;

@property (readonly) NSArray *sleepNodeArray;

@end

NS_ASSUME_NONNULL_END
