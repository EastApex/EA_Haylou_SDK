//
//  EADBStepModel.h
//  EABluetooth
//
//  Created by Aye on 2023/2/6.
//

#import "EADBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN



@interface EADBStepModel : EADBBaseModel

/// 单日 步数总计
@property NSInteger stepTotal;

/// 单日 卡路里总计（单位：卡）
@property NSInteger calorieTotal;

/// 单日 距离总计（单位：厘米）
@property NSInteger distanceTotal;

/// 单日 运动时间总计（单位：秒）
@property NSInteger durationTotal;

/// 单日 平均心率（精确到0.1f）
@property CGFloat averageHeartRate;

/// 每个小时步数数据（逗号隔开）
@property NSString *hourSteps;

/// 每个小时步数数据
@property (readonly) NSArray *hourStepArray;

/// 每个小时卡路里数据（逗号隔开）
@property NSString *hourCalories;

/// 每个小时卡路里数据
@property (readonly) NSArray *hourCalorieArray;

/// 每个小时距离数据（逗号隔开）
@property NSString *hourDistances;

/// 每个小时距离数据
@property (readonly) NSArray *hourDistanceArray;

/// 每个小时运动时间离数据（逗号隔开）
@property NSString *hourDurations;

/// 每个小时运动时间数据
@property (readonly) NSArray *hourDurationArray;





@end

NS_ASSUME_NONNULL_END
