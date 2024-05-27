//
//  EASos.h
//  EABluetooth
//
//  Created by Aye on 2023/6/29.
//

#import <EABluetooth/EABluetooth.h>

NS_ASSUME_NONNULL_BEGIN

/// id = 58
/// 紧急联系人
/// Sos
@interface EASos : EABaseModel

/// 名称
/// name,max lenght 64 字节
@property(nonatomic, strong) NSString *name;

/// 电话号码
/// number,max lenght 32 字节
@property(nonatomic, strong) NSString *num;


/** 名字 扩展1 */
@property(nonatomic, strong) NSString *nameEx1;

/** 号码 扩展1 */
@property(nonatomic, strong) NSString *numEx1;

/** 名字 扩展2 */
@property(nonatomic, strong) NSString *nameEx2;

/** 号码 扩展2 */
@property(nonatomic, strong) NSString *numEx2;


/// init class EASos
/// - Parameters:
///   - name: name
///   - num: phone number
+ (instancetype)eaInitWithName:(NSString *)name num:(NSString *)num;






@end

NS_ASSUME_NONNULL_END