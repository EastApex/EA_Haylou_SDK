//
//  EASocialSwitchModel.h
//  EABluetooth
//
//  Created by Aye on 2021/3/22.
//

#import <EABluetooth/EABaseModel.h>

NS_ASSUME_NONNULL_BEGIN



/// 社交提醒设置
@interface EASocialOps : EABaseModel

/// on-off
/// 开关
@property(nonatomic, assign) NSInteger sw;

/// Remind the way
/// 提醒方式
@property(nonatomic, assign) EARemindActionType remindActionType;

+ (instancetype)eaInitWithOnOff:(NSInteger)onOff remindActionType:(EARemindActionType)remindActionType;

@end


/// id = 21 : Social alert switch
/// id = 21 : 社交提醒开关
@interface EASocialSwitchModel : EABaseModel

/// incoming call
/// 来电
@property(nonatomic, strong) EASocialOps *sIncomingcall;

/// Missed vall
/// 未知来电
@property(nonatomic, strong) EASocialOps *sMissedcall;

/// Sms
/// 短信
@property(nonatomic, strong) EASocialOps *sSms;

/// Social will affect the display of APP push. [1: displayed 0: not displayed]
/// 社交（第三方App推送提醒 ） 会影响 APP推送的显示。1：显示 0：不显示
@property(nonatomic, strong) EASocialOps *sSocial;

/// sEmail affects mobile email APP alerts. [1: displayed 0: not displayed]
/// 邮件 会影响手机邮箱APP提醒。1：显示 0：不显示
@property(nonatomic, strong) EASocialOps *sEmail;


/// Schedule affects calendar reminders on your phone. [1: displayed 0: not displayed]
/// 日程（iPhone日历提醒） 会影响手机日历提醒。1：显示 0：不显示
@property(nonatomic, strong) EASocialOps *sSchedule;






+ (instancetype)eaInitWithRemindActionType:(EARemindActionType)remindActionType incomingcall:(NSInteger)incomingcall missedcall:(NSInteger)missedcall sms:(NSInteger)sms social:(NSInteger)social email:(NSInteger)email schedule:(NSInteger)schedule;

@end



NS_ASSUME_NONNULL_END
