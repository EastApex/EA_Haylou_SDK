//
//  EAPwd.h
//  EABluetooth
//
//  Created by Aye on 2024/4/3.
//

#import <EABluetooth/EABluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@interface EAPwd : EABaseModel

/// on-off：Whether to start watch password
/// 开关：是否开始手表密码
@property(nonatomic, assign) NSInteger sw;

//@property(nonatomic, assign) NSInteger pwdLen;


/// password,max length 6、
/// 密码，长度为6
@property(nonatomic, strong) NSString *pwd;



+ (instancetype)eaInitWithSwitch:(BOOL )sw pwd:(NSString *)pwd;

@end

NS_ASSUME_NONNULL_END
