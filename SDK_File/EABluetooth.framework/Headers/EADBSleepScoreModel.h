//
//  EADBSleepScoreModel.h
//  EABluetooth
//
//  Created by Aye on 2024/4/8.
//

#import <EABluetooth/EABluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@interface EADBSleepScoreModel : EADBBaseModel

@property NSInteger beginTimeStamp;
@property NSInteger endTimeStamp;
@property NSInteger sleepScore;

+ (instancetype )eaGetSleepScoreModelWithWatchSign:(NSString *)watchSign beginTimeStamp:(NSInteger)beginTimeStamp endTimeStamp:(NSInteger)endTimeStamp;
@end

NS_ASSUME_NONNULL_END
